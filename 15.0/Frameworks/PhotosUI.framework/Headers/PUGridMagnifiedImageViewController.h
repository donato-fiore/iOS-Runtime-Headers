// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUGRIDMAGNIFIEDIMAGEVIEWCONTROLLER_H
#define PUGRIDMAGNIFIEDIMAGEVIEWCONTROLLER_H

@class UIViewController, NSIndexPath;


#import "PUGridMagnifiedView.h"

@interface PUGridMagnifiedImageViewController : UIViewController

@property (readonly, nonatomic) BOOL canShowFullScreen; // ivar: _canShowFullScreen
@property (weak, nonatomic) id *delegate; // ivar: _delegate
@property (nonatomic) CGPoint gestureWindLocation; // ivar: _gestureWindLocation
@property (nonatomic) CGSize imageSize; // ivar: _imageSize
@property (retain, nonatomic) NSIndexPath *itemIndexPath; // ivar: _itemIndexPath
@property (nonatomic) CGRect itemWindFrame; // ivar: _itemWindFrame
@property (nonatomic) CGPoint lastLocation; // ivar: _lastLocation
@property (nonatomic) UIEdgeInsets magnifiedDragEdgeInsets; // ivar: _magnifiedDragEdgeInsets
@property (nonatomic) CGSize magnifiedSize; // ivar: _magnifiedSize
@property (retain, nonatomic) PUGridMagnifiedView *magnifiedView; // ivar: _magnifiedView
@property (nonatomic) CGFloat magnifiedYOffset; // ivar: _magnifiedYOffset
@property (nonatomic) CGSize shadowOffset; // ivar: _shadowOffset
@property (nonatomic) CGFloat shadowOpacity; // ivar: _shadowOpacity
@property (nonatomic) CGFloat shadowRadius; // ivar: _shadowRadius
@property (nonatomic) CGRect trackingWindFrame; // ivar: _trackingWindFrame


-(BOOL)gestureInNewLocation;
-(BOOL)isValidMagnifyLocation:(struct CGPoint )arg0 ;
-(id)imageForIndexPath:(id)arg0 ;
-(id)imageForMagnifyLocation:(struct CGPoint )arg0 ;
-(id)initWithDelegate:(id)arg0 ;
-(id)installMagnifiedView;
-(struct CGRect )magnifiedImageWindFrame;
-(void)beginMagnificationAnimated:(BOOL)arg0 ;
-(void)continueMagnification;
-(void)hideMagnifiedThumbnailWithAnimation:(BOOL)arg0 ;
-(void)loadView;
-(void)prepareForRelease;
-(void)setupMagnifiedView;


@end


#endif