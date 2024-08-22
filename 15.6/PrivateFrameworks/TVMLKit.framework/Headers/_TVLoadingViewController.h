// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TVLOADINGVIEWCONTROLLER_H
#define _TVLOADINGVIEWCONTROLLER_H

@class TVBgImageLoadingViewController, IKImageElement, IKViewElement;



@interface _TVLoadingViewController : TVBgImageLoadingViewController {
    IKImageElement *_bgImageElement;
    IKImageElement *_heroImgElement;
    IKViewElement *_loadingTemplateElement;
    CGFloat _spinnerDelay;
}




-(BOOL)_backgroundImageRequiresBlur;
-(NSInteger)_blurEffectStyle;
-(id)_backgroundImageProxy;
-(id)init;
-(struct CGSize )_backgroundImageProxySize;
-(void)_configureWithBgImage:(id)arg0 backdropImage:(id)arg1 ;
-(void)loadView;
-(void)setSpinnerDelay:(CGFloat)arg0 ;
-(void)updateWithLoadingTemplate:(id)arg0 ;
-(void)updateWithViewElement:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif