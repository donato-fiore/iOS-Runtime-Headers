// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BKSHIDEVENTDEFERRINGRESOLUTION_H
#define BKSHIDEVENTDEFERRINGRESOLUTION_H

@class NSString;
@protocol BSDescriptionStreamable, NSCopying, NSMutableCopying, NSSecureCoding, BKSHIDEventBaseAttributeSubsetProviding;

#import <Foundation/Foundation.h>

#import "BKSHIDEventDispatchingTarget.h"
#import "BKSHIDEventDisplay.h"
#import "BKSHIDEventDeferringEnvironment.h"
#import "BKSHIDEventDeferringToken.h"

@interface BKSHIDEventDeferringResolution : NSObject <BSDescriptionStreamable, NSCopying, NSMutableCopying, NSSecureCoding, BKSHIDEventBaseAttributeSubsetProviding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BKSHIDEventDispatchingTarget *dispatchingTarget; // ivar: _dispatchingTarget
@property (readonly, copy, nonatomic) BKSHIDEventDisplay *display; // ivar: _display
@property (readonly, copy, nonatomic) BKSHIDEventDeferringEnvironment *environment; // ivar: _environment
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isBuffer; // ivar: _isBuffer
@property (readonly, nonatomic) int pid; // ivar: _pid
@property (readonly, copy, nonatomic) NSString *processDescription; // ivar: _processDescription
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) BKSHIDEventDeferringToken *token; // ivar: _token
@property (readonly, nonatomic) NSInteger versionedPID; // ivar: _versionedPID


+(BOOL)supportsSecureCoding;
+(id)build:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)modifiedResolution:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)appendDescriptionToFormatter:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif