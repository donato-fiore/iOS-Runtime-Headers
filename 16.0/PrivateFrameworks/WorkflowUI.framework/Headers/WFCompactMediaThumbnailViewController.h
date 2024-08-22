// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFCOMPACTMEDIATHUMBNAILVIEWCONTROLLER_H
#define WFCOMPACTMEDIATHUMBNAILVIEWCONTROLLER_H

@class AVPlayerItem;


#import "WFCompactThumbnailViewController.h"

@interface WFCompactMediaThumbnailViewController : WFCompactThumbnailViewController

@property (readonly, nonatomic) AVPlayerItem *playerItem; // ivar: _playerItem


-(BOOL)contentHeightLikelyToChange;
-(CGFloat)contentHeightForWidth:(CGFloat)arg0 ;
-(id)initWithAVPlayerItem:(id)arg0 ;
-(void)dealloc;
-(void)loadView;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;


@end


#endif