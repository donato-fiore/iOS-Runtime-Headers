// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RTIINPUTOPERATION_H
#define RTIINPUTOPERATION_H

@class NSString, TIKeyboardInput;
@protocol NSSecureCoding, RTICustomDataProtocol;

#import <Foundation/Foundation.h>


@interface RTIInputOperation : NSObject <NSSecureCoding, RTICustomDataProtocol>



@property (nonatomic) SEL actionSelector; // ivar: _actionSelector
@property (retain, nonatomic) NSObject<NSSecureCoding> *customInfo; // ivar: _customInfo
@property (retain, nonatomic) NSString *customInfoType; // ivar: _customInfoType
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) int inputModality; // ivar: _inputModality
@property (retain, nonatomic) TIKeyboardInput *keyboardInput; // ivar: _keyboardInput
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(void)registerCustomInfoClasses:(id)arg0 forType:(id)arg1 ;
+(void)unregisterCustomInfoType:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif