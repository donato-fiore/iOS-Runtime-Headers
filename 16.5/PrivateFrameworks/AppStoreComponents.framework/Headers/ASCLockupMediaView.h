// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASCLOCKUPMEDIAVIEW_H
#define ASCLOCKUPMEDIAVIEW_H

@class UIControl, UIView, NSString, NSMutableArray, NSArray;
@protocol ASCLockupMediaPresenterView;


#import "ASCScreenshots.h"
#import "ASCTrailers.h"
#import "ASCVideoView.h"

@interface ASCLockupMediaView : UIControl <ASCLockupMediaPresenterView>



@property (readonly, nonatomic) UIView *containerView; // ivar: _containerView
@property (copy, nonatomic) NSString *context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSMutableArray *imageViews; // ivar: _imageViews
@property (readonly, nonatomic) NSArray *mediaViews;
@property (nonatomic) NSUInteger numberOfViews; // ivar: _numberOfViews
@property (readonly, nonatomic) CGSize preferredScreenshotSize;
@property (copy, nonatomic) ASCScreenshots *screenshots; // ivar: _screenshots
@property (readonly) Class superclass;
@property (copy, nonatomic) ASCTrailers *trailers; // ivar: _trailers
@property (nonatomic, getter=isVideoLoopingEnabled) BOOL videoLoopingEnabled; // ivar: _videoLoopingEnabled
@property (nonatomic, getter=isVideoMuted) BOOL videoMuted; // ivar: _videoMuted
@property (retain, nonatomic) ASCVideoView *videoView; // ivar: _videoView


-(NSUInteger)numberOfImageViews;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)makeLayout;
-(id)makeSizingLayout;
-(struct CGSize )estimatedMediaContentSize;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(struct UIEdgeInsets )layoutMarginsForCurrentContext;
-(void)encodeWithCoder:(id)arg0 ;
-(void)invalidateIntrinsicContentSize;
-(void)layoutMarginsDidChange;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)setImage:(id)arg0 atIndex:(NSInteger)arg1 ;
-(void)updateImageViews;


@end


#endif