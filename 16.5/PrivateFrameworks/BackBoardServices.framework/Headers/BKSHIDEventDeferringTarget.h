// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BKSHIDEVENTDEFERRINGTARGET_H
#define BKSHIDEVENTDEFERRINGTARGET_H

@class NSString;
@protocol NSSecureCoding, BSProtobufSerializable, BSDescriptionStreamable, NSCopying, NSMutableCopying;

#import <Foundation/Foundation.h>

#import "BKSHIDEventDeferringToken.h"

@interface BKSHIDEventDeferringTarget : NSObject <NSSecureCoding, BSProtobufSerializable, BSDescriptionStreamable, NSCopying, NSMutableCopying>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) int pid; // ivar: _pid
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) BKSHIDEventDeferringToken *token; // ivar: _token


+(BOOL)supportsSecureCoding;
+(id)protobufSchema;
-(BOOL)isEqual:(id)arg0 ;
-(id)_initWithPID:(int)arg0 token:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initForProtobufDecoding;
-(id)initWithCoder:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)appendDescriptionToFormatter:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif