// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BLTWRISTSTATEOBSERVER_H
#define BLTWRISTSTATEOBSERVER_H

@class NSString;
@protocol MCProfileConnectionObserver;

#import <Foundation/Foundation.h>


@interface BLTWristStateObserver : NSObject <MCProfileConnectionObserver>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isWristDetectDisabled; // ivar: _isWristDetectDisabled
@property (readonly) Class superclass;


-(BOOL)_isWristDetectionDisabled;
-(BOOL)_wristDetectionDisabledPreference;
-(BOOL)_wristDetectionEnabledRestriction;
-(id)init;
-(void)_updateWristDetectSetting;
-(void)dealloc;
-(void)profileConnectionDidReceiveRestrictionChangedNotification:(id)arg0 userInfo:(id)arg1 ;


@end


#endif