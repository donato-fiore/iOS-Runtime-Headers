// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SXAUTOMATICFULLSCREENVIDEOPLAYBACKBEHAVIORMANAGER_H
#define SXAUTOMATICFULLSCREENVIDEOPLAYBACKBEHAVIORMANAGER_H

@class NSString;
@protocol SXVideoPlaybackObserver, SXAutomaticFullscreenVideoPlaybackBehaviorManagerDelegate;

#import <Foundation/Foundation.h>


@interface SXAutomaticFullscreenVideoPlaybackBehaviorManager : NSObject <SXVideoPlaybackObserver>



@property (nonatomic) NSUInteger behavior; // ivar: _behavior
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SXAutomaticFullscreenVideoPlaybackBehaviorManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (nonatomic) CGRect videoBounds; // ivar: _videoBounds


-(BOOL)fullscreenPlaybackRequiredForCurrentConditions;
-(void)conditionsChanged;
-(void)playbackCoordinatorResumedPlayback:(id)arg0 ;
-(void)playbackCoordinatorStartedPlayback:(id)arg0 ;


@end


#endif