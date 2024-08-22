// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RUIMODALPRESENTATIONCONTROLLER_H
#define RUIMODALPRESENTATIONCONTROLLER_H

@class UIFormSheetPresentationController;


#import "RUIStyle.h"

@interface RUIModalPresentationController : UIFormSheetPresentationController {
    RUIStyle *_style;
}


@property (nonatomic, setter=setRUIModalPresentationStyle:) NSUInteger ruiModalPresentationStyle; // ivar: _ruiModalPresentationStyle


-(CGFloat)_sheetHeightWithSize:(struct CGSize )arg0 ;
-(NSUInteger)modalPresentationStyle;
-(id)initWithPresentedViewController:(id)arg0 presentingViewController:(id)arg1 modalPresentationStyle:(NSUInteger)arg2 ;
-(id)initWithPresentedViewController:(id)arg0 presentingViewController:(id)arg1 modalPresentationStyle:(NSUInteger)arg2 style:(id)arg3 ;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg0 ;
-(void)presentationTransitionWillBegin;


@end


#endif