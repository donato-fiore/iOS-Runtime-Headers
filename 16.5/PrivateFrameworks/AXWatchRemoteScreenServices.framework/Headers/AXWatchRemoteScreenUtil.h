// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AXWATCHREMOTESCREENUTIL_H
#define AXWATCHREMOTESCREENUTIL_H

@class NSString;

#import <Foundation/Foundation.h>


@interface AXWatchRemoteScreenUtil : NSObject {
    ? caSessionIntervalEvent;
    ? caSessionIntervalKey;
    ? caErrorEvent;
    ? caErrorKey;
    ? caInactiveEvent;
    ? caInactiveKey;
}


@property (nonatomic, readonly) NSString *caErrorEvent;
@property (nonatomic, readonly) NSString *caErrorKey;
@property (nonatomic, readonly) NSString *caInactiveEvent;
@property (nonatomic, readonly) NSString *caInactiveKey;
@property (nonatomic, readonly) NSString *caSessionIntervalEvent;
@property (nonatomic, readonly) NSString *caSessionIntervalKey;


+(id)AXWatchRemoteScreenFeatureDomain;
+(id)AXWatchRemoteScreenFeatureKey;
+(id)sharedInstance;
-(BOOL)isPairedGizmoHasStingSupport;
-(BOOL)isPairedGizmoSupported;
-(BOOL)isPairedGizmoSupportedWithDeviceID:(id)arg0 ;
-(BOOL)isTwiceFeatureOn;
-(id)currentPairedGizmo;
-(id)init;
-(id)localizedStingStringWithKey:(id)arg0 ;
-(id)localizedStringWithKey:(id)arg0 ;
-(id)pairedGizmoName;
-(void)logInactiveSession;
-(void)logSessionErrorWithErrorName:(id)arg0 ;
-(void)logSessionIntervalBeforeDate:(id)arg0 afterDate:(id)arg1 ;


@end


#endif