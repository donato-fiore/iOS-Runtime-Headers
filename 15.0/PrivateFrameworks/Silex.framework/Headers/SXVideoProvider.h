// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SXVIDEOPROVIDER_H
#define SXVIDEOPROVIDER_H

@class NSURL, NSString;
@protocol SXVideoProviding, SXAnalyticsReporting, SXVideoMetadata;

#import <Foundation/Foundation.h>

#import "SXTimeline.h"

@interface SXVideoProvider : NSObject <SXVideoProviding>



@property (readonly, nonatomic) NSURL *URL; // ivar: _URL
@property (retain, nonatomic) NSObject<SXAnalyticsReporting> *analyticsReporter; // ivar: _analyticsReporter
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGFloat impressionThreshold;
@property (readonly, nonatomic) NSString *mediaIdentifier; // ivar: _mediaIdentifier
@property (weak, nonatomic) NSObject<SXVideoMetadata> *metadata; // ivar: _metadata
@property (nonatomic) CGFloat pausedAtTime; // ivar: _pausedAtTime
@property (nonatomic) NSUInteger playMethod; // ivar: _playMethod
@property (readonly) Class superclass;
@property (readonly, nonatomic) SXTimeline *timeline; // ivar: _timeline


-(id)initWithURL:(id)arg0 ;
-(id)loadWithCompletionBlock:(SEL)arg0 ;
-(void)muteStateChanged:(BOOL)arg0 ;
-(void)playbackFailedWithError:(id)arg0 ;
-(void)playbackFinished;
-(void)playbackInitiatedWithButtonTapped:(BOOL)arg0 ;
-(void)playbackPassedQuartile:(NSUInteger)arg0 ;
-(void)playbackPaused;
-(void)playbackResumed;
-(void)playbackStarted;


@end


#endif