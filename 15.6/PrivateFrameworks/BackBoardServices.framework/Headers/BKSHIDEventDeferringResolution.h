// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BKSHIDEVENTDEFERRINGRESOLUTION_H
#define BKSHIDEVENTDEFERRINGRESOLUTION_H

@class NSString;
@protocol NSCopying, NSMutableCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "BKSHIDEventDisplay.h"
#import "BKSHIDEventDeferringEnvironment.h"
#import "BKSHIDEventDeferringToken.h"

@interface BKSHIDEventDeferringResolution : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (readonly, copy, nonatomic) BKSHIDEventDisplay *display; // ivar: _display
@property (readonly, copy, nonatomic) BKSHIDEventDeferringEnvironment *environment; // ivar: _environment
@property (readonly, nonatomic) int pid; // ivar: _pid
@property (readonly, copy, nonatomic) BKSHIDEventDeferringToken *token; // ivar: _token
@property (readonly, nonatomic) NSInteger versionedPID; // ivar: _versionedPID


+(BOOL)supportsSecureCoding;
+(id)build:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_initWithDisplay:(id)arg0 environment:(id)arg1 versionedPID:(NSInteger)arg2 pid:(int)arg3 token:(id)arg4 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)modifiedResolution:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif