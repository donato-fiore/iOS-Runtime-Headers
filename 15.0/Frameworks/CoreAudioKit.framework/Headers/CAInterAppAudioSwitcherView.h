// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CAINTERAPPAUDIOSWITCHERVIEW_H
#define CAINTERAPPAUDIOSWITCHERVIEW_H

@class UIView, UIPageControl, NSTimer, NSString;
@protocol UIScrollViewDelegate;


#import "CAIAANodeContainer.h"
#import "CAIAANodeInfo.h"

@interface CAInterAppAudioSwitcherView : UIView <UIScrollViewDelegate>

 {
    *OpaqueAudioComponentInstance outputUnit;
    CAIAANodeContainer *nodeView;
    UIPageControl *pageControl;
    CAIAANodeInfo *info;
    NSTimer *refreshTimer;
    BOOL showingAppNames;
    BOOL isHostConnected;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (getter=isShowingAppNames) BOOL showingAppNames;
@property (readonly) Class superclass;


-(BOOL)isHostConnected;
-(CGFloat)contentWidth;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)appHasGoneForeground;
-(void)appHasGoneInBackground;
-(void)audioUnitPropertyChangedListener:(*void)arg0 unit:(struct OpaqueAudioComponentInstance *)arg1 propID:(unsigned int)arg2 scope:(unsigned int)arg3 element:(unsigned int)arg4 ;
-(void)changePage:(id)arg0 ;
-(void)didMoveToSuperview;
-(void)initialize;
-(void)layoutSubviews;
-(void)nodePressed:(id)arg0 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)removeFromSuperview;
-(void)scrollViewDidEndDecelerating:(id)arg0 ;
-(void)setOutputAudioUnit:(struct OpaqueAudioComponentInstance *)arg0 ;
-(void)startTimer;
-(void)updateInfo;
-(void)updateNodeList;


@end


#endif