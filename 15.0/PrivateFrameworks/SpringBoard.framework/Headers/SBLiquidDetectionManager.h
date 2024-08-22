// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBLIQUIDDETECTIONMANAGER_H
#define SBLIQUIDDETECTIONMANAGER_H


#import <Foundation/Foundation.h>


@interface SBLiquidDetectionManager : NSObject {
    int _wetToken;
    BOOL _finishedInit;
}


@property (readonly, nonatomic, getter=isAccessoryPortWet) BOOL accessoryPortWet; // ivar: _accessoryPortWet
@property (readonly, nonatomic, getter=isDetectionEnabled) BOOL detectionEnabled; // ivar: _detectionEnabled
@property (readonly, nonatomic, getter=isLiquidDetected) BOOL liquidDetected;


+(BOOL)showStatusBarIcon;
+(id)sharedInstance;
-(BOOL)_showStatusBarIcon;
-(id)description;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)init;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)_finishInit;
-(void)_stateDidUpdate;
-(void)_updateStatusBar;
-(void)_updateWetState;
-(void)dealloc;


@end


#endif