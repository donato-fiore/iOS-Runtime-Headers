// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC13TRANSLATIONUI27VISUALTRANSLATIONVIEWBRIDGE_H
#define _TTC13TRANSLATIONUI27VISUALTRANSLATIONVIEWBRIDGE_H

@class UIView;

#import <Foundation/Foundation.h>


@interface _TtC13TranslationUI27VisualTranslationViewBridge : NSObject {
    ? observable;
    ? optimizedForExtendedExperience;
    ? dismissHandler;
    ? $__lazy_storage_$_hostingController;
}


@property (nonatomic, copy) id *dismissHandler;
@property (nonatomic, readonly) UIView *view;


+(void)isTranslatable:(id)arg0 completion:(id)arg1 ;
-(id)init;
-(void)dismissErrorUI;
-(void)setPresentationAnchorWithRect:(struct CGRect )arg0 contentRect:(struct CGRect )arg1 ;
-(void)setZoomScale:(CGFloat)arg0 ;
-(void)translate:(id)arg0 sourceLocale:(id)arg1 targetLocale:(id)arg2 completion:(id)arg3 ;


@end


#endif