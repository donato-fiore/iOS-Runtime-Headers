// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFMACHINEREADABLECODE_H
#define WFMACHINEREADABLECODE_H

@class NSString;
@protocol NSSecureCoding, WFSerializableContent, WFNaming;

#import <Foundation/Foundation.h>


@interface WFMachineReadableCode : NSObject <NSSecureCoding, WFSerializableContent, WFNaming>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *stringValue; // ivar: _stringValue
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *type; // ivar: _type
@property (readonly, copy, nonatomic) NSString *wfName;


+(BOOL)supportsSecureCoding;
+(id)objectWithWFSerializedRepresentation:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMachineReadableCodeObject:(id)arg0 ;
-(id)initWithType:(id)arg0 stringValue:(id)arg1 ;
-(id)wfSerializedRepresentation;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif