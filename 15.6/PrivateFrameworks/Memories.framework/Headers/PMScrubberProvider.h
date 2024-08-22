// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PMSCRUBBERPROVIDER_H
#define PMSCRUBBERPROVIDER_H

@class NSString;
@protocol PMScrubberProviderDataSource, PMScrubberProviderActionDelegate, PMScrubberProviderDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "VEKResult.h"

@interface PMScrubberProvider : NSObject <PMScrubberProviderDataSource>



@property (weak, nonatomic) NSObject<PMScrubberProviderActionDelegate> *actionDelegate; // ivar: _actionDelegate
@property (nonatomic) CGFloat currentDuration; // ivar: _currentDuration
@property (nonatomic) CGFloat currentProgress; // ivar: _currentProgress
@property (retain, nonatomic) VEKResult *currentResult; // ivar: _currentResult
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PMScrubberProviderDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isPlayingCurrent; // ivar: _isPlayingCurrent
@property (nonatomic) BOOL isPlayingPrevious; // ivar: _isPlayingPrevious
@property (nonatomic) BOOL isScrubbing; // ivar: _isScrubbing
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // ivar: _serialQueue
@property (readonly) Class superclass;


-(NSInteger)clipIndexWithTime:(CGFloat)arg0 ;
-(id)init;
-(void)imageForItem:(NSInteger)arg0 withThumbnailCount:(NSInteger)arg1 size:(struct CGSize )arg2 completionHandler:(id)arg3 ;
-(void)playbackProgressDidChange:(struct ? )arg0 ;
-(void)playbackStatusDidChange:(BOOL)arg0 ;
-(void)scrubberReleasedWithProgress:(CGFloat)arg0 ;
-(void)scrubberScrolledWithProgress:(CGFloat)arg0 ;
-(void)scrubberTapped;
-(void)scrubberToggled;
-(void)scrubberTouched;
-(void)updateWithResult:(id)arg0 ;
-(void)willEnterEditMode;


@end


#endif