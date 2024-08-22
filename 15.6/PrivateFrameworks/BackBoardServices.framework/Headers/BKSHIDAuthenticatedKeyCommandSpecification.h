// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BKSHIDAUTHENTICATEDKEYCOMMANDSPECIFICATION_H
#define BKSHIDAUTHENTICATEDKEYCOMMANDSPECIFICATION_H

@class NSString;
@protocol NSSecureCoding, BSProtobufSerializable, BSDescriptionStreamable;

#import <Foundation/Foundation.h>

#import "BKSHIDEventKeyCommand.h"

@interface BKSHIDAuthenticatedKeyCommandSpecification : NSObject <NSSecureCoding, BSProtobufSerializable, BSDescriptionStreamable>



@property (nonatomic) NSUInteger context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) BKSHIDEventKeyCommand *keyCommand; // ivar: _keyCommand
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)protobufSchema;
+(id)specificationWithKeyCommand:(id)arg0 context:(NSUInteger)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)_init;
-(id)initForProtobufDecoding;
-(id)initWithCoder:(id)arg0 ;
-(void)appendDescriptionToFormatter:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif