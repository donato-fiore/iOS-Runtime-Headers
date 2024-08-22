// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TVDIVTEMPLATECONTROLLER_H
#define _TVDIVTEMPLATECONTROLLER_H

@class TVBgImageLoadingViewController, UIImageView, NSArray, IKViewElement;


#import "TVImageProxy.h"
#import "_TVOrganizerView.h"

@interface _TVDivTemplateController : TVBgImageLoadingViewController

@property (retain, nonatomic) TVImageProxy *backgroundImageProxy; // ivar: _backgroundImageProxy
@property (retain, nonatomic) UIImageView *backgroundImageView; // ivar: _backgroundImageView
@property (retain, nonatomic) _TVOrganizerView *contentView; // ivar: _contentView
@property (copy, nonatomic) NSArray *viewControllers; // ivar: _viewControllers
@property (retain, nonatomic) IKViewElement *viewElement; // ivar: _viewElement


-(id)init;
-(id)preferredFocusEnvironments;
-(void)_configureWithBgImage:(id)arg0 backdropImage:(id)arg1 ;
-(void)_updateContentView;
-(void)loadView;
-(void)updateWithViewElement:(id)arg0 ;
-(void)viewDidLayoutSubviews;


@end


#endif