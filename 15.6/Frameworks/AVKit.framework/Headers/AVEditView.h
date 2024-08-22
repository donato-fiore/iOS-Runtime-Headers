// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVEDITVIEW_H
#define AVEDITVIEW_H

@class UIView, NSString, UIMovieScrubber;
@protocol UIMovieScrubberDataSource, UIMovieScrubberDelegate, AVEditViewDataSource, AVEditViewDelegate;



@interface AVEditView : UIView <UIMovieScrubberDataSource, UIMovieScrubberDelegate>



@property (weak, nonatomic) NSObject<AVEditViewDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<AVEditViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) UIMovieScrubber *movieScrubber; // ivar: _movieScrubber
@property (nonatomic) BOOL prefersThumbVisible; // ivar: _prefersThumbVisible
@property (nonatomic, getter=isScrubbing) BOOL scrubbing; // ivar: _scrubbing
@property (readonly) Class superclass;
@property (readonly, nonatomic) CGFloat trimEndTime;
@property (readonly, nonatomic) CGFloat trimStartTime;
@property (nonatomic, getter=isTrimming) BOOL trimming; // ivar: _trimming


-(CGFloat)movieScrubberDuration:(id)arg0 ;
-(CGFloat)movieScrubberThumbnailAspectRatio:(id)arg0 ;
-(id)movieScrubber:(id)arg0 evenlySpacedTimestamps:(int)arg1 startingAt:(id)arg2 endingAt:(id)arg3 ;
-(struct CGSize )intrinsicContentSize;
-(void)layoutSubviews;
-(void)movieScrubber:(id)arg0 editingEndValueDidChange:(CGFloat)arg1 ;
-(void)movieScrubber:(id)arg0 editingStartValueDidChange:(CGFloat)arg1 ;
-(void)movieScrubber:(id)arg0 requestThumbnailImageForTimestamp:(id)arg1 ;
-(void)movieScrubber:(id)arg0 valueDidChange:(CGFloat)arg1 ;
-(void)movieScrubberDidBeginScrubbing:(id)arg0 withHandle:(int)arg1 ;
-(void)movieScrubberDidEndScrubbing:(id)arg0 withHandle:(int)arg1 ;
-(void)movieScrubberDidFinishRequestingThumbnails:(id)arg0 ;
-(void)movieScrubberWillBeginRequestingThumbnails:(id)arg0 ;
-(void)reloadData;
-(void)setCurrentTime:(CGFloat)arg0 ;
-(void)setThumbnailImage:(struct CGImage *)arg0 forTimestamp:(id)arg1 ;
-(void)userObservationGestureRecognizerFired:(id)arg0 ;


@end


#endif