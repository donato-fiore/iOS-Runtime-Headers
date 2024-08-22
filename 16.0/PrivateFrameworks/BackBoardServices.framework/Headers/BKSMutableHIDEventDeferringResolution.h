// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BKSMUTABLEHIDEVENTDEFERRINGRESOLUTION_H
#define BKSMUTABLEHIDEVENTDEFERRINGRESOLUTION_H

@class NSString;


#import "BKSHIDEventDeferringResolution.h"
#import "BKSHIDEventDispatchingTarget.h"
#import "BKSHIDEventDisplay.h"
#import "BKSHIDEventDeferringEnvironment.h"
#import "BKSHIDEventDeferringToken.h"

@interface BKSMutableHIDEventDeferringResolution : BKSHIDEventDeferringResolution

@property (retain, nonatomic) BKSHIDEventDispatchingTarget *dispatchingTarget;
@property (copy, nonatomic) BKSHIDEventDisplay *display;
@property (copy, nonatomic) BKSHIDEventDeferringEnvironment *environment;
@property (nonatomic) int pid;
@property (copy, nonatomic) NSString *processDescription;
@property (copy, nonatomic) BKSHIDEventDeferringToken *token;
@property (nonatomic) NSInteger versionedPID;


+(id)new;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif