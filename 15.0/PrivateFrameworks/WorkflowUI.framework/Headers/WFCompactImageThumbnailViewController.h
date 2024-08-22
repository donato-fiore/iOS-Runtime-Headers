// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFCOMPACTIMAGETHUMBNAILVIEWCONTROLLER_H
#define WFCOMPACTIMAGETHUMBNAILVIEWCONTROLLER_H

@class UIImageView;


#import "WFCompactThumbnailViewController.h"

@interface WFCompactImageThumbnailViewController : WFCompactThumbnailViewController

@property (readonly, nonatomic) CGFloat aspectRatio; // ivar: _aspectRatio
@property (readonly, nonatomic) id *imageGenerator; // ivar: _imageGenerator
@property (weak, nonatomic) UIImageView *imageView; // ivar: _imageView
@property (nonatomic) CGFloat lastViewWidth; // ivar: _lastViewWidth


-(CGFloat)contentHeightForWidth:(CGFloat)arg0 ;
-(id)initWithAspectRatio:(CGFloat)arg0 imageGenerator:(id)arg1 ;
-(void)loadView;
-(void)redrawImage;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidLayoutSubviews;


@end


#endif