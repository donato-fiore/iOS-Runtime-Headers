// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BKSMUTABLEHIDUISENSORMODE_H
#define BKSMUTABLEHIDUISENSORMODE_H

@class NSSet, NSString;


#import "BKSHIDUISensorMode.h"

@interface BKSMutableHIDUISensorMode : BKSHIDUISensorMode

@property (nonatomic) BOOL alwaysOnGesturesEnabled;
@property (nonatomic) NSUInteger changeSource;
@property (nonatomic) BOOL coverGestureEnabled;
@property (nonatomic) BOOL digitizerEnabled;
@property (nonatomic) BOOL estimatedProximityMode;
@property (copy, nonatomic) NSSet *multitouchHostStateKeys;
@property (nonatomic) BOOL pocketTouchesExpected;
@property (nonatomic) BOOL postEventWithCurrentDetectionMask;
@property (nonatomic) int proximityDetectionMode;
@property (retain, nonatomic) NSString *reason;
@property (nonatomic) BOOL tapToWakeEnabled;
@property (nonatomic) NSInteger versionedPID;


-(id)initWithReason:(id)arg0 ;
-(void)_setSettingKey:(id)arg0 enabled:(BOOL)arg1 ;


@end


#endif