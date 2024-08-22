// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PBUIPOSTERHOMEVIEWCONTROLLER_H
#define PBUIPOSTERHOMEVIEWCONTROLLER_H

@class PRPosterHomeScreenConfiguration;


#import "PBUIPosterVariantViewController.h"
#import "PBUIPortalReplicaEffectView.h"
#import "PBUIGradientView.h"
#import "PBUIColorStatistics.h"

@interface PBUIPosterHomeViewController : PBUIPosterVariantViewController {
    int _currentMode;
    PRPosterHomeScreenConfiguration *_homeConfiguration;
    PBUIPortalReplicaEffectView *_effectView;
    PBUIGradientView *_gradientView;
    PBUIColorStatistics *_fixedColorStatistics;
}


@property (readonly, nonatomic) BOOL isBlurred;


-(BOOL)areSettingsAppropriateForSnapshotting:(id)arg0 ;
-(BOOL)evaluateSnapshotPreconditions;
-(BOOL)isSettledPosition;
-(BOOL)reflectsLock;
-(BOOL)updateGradientViewWithGradient:(id)arg0 ;
-(BOOL)updatePresentation;
-(CGFloat)averageContrast;
-(CGFloat)weightingForEffectView;
-(NSInteger)variant;
-(id)averageColor;
-(id)contentColorStatistics;
-(id)homeScreenConfiguration;
-(id)legibilitySettings;
-(void)performSnapshotOnQueue:(id)arg0 completion:(id)arg1 ;
-(void)setCounterpart:(id)arg0 ;
-(void)setFixedAverageColor:(id)arg0 ;


@end


#endif