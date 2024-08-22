// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TVDESCRIPTIVEALERTTEMPLATECONTROLLER_H
#define _TVDESCRIPTIVEALERTTEMPLATECONTROLLER_H

@class TVBgImageLoadingViewController, IKViewElement, NSArray, UIView, UIColor, IKImageElement;



@interface _TVDescriptiveAlertTemplateController : TVBgImageLoadingViewController {
    IKViewElement *_templateElement;
    NSArray *_templateSubviews;
    NSArray *_templateSubcontrollers;
    UIView *_preferredFocusView;
    UIColor *_backgroundColor;
    IKImageElement *_bgImageElement;
    IKImageElement *_bgHeroImageElement;
}




-(BOOL)_backgroundImageRequiresBlur;
-(NSInteger)_blurEffectStyle;
-(id)_backgroundImageProxy;
-(struct CGSize )_backgroundImageProxySize;
-(void)_configureWithBgImage:(id)arg0 backdropImage:(id)arg1 ;
-(void)_normalizeButtonsInViews:(id)arg0 ;
-(void)loadView;
-(void)updateWithViewElement:(id)arg0 ;


@end


#endif