// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RUIMODALPRESENTATIONCONTROLLER_H
#define RUIMODALPRESENTATIONCONTROLLER_H

@class UIFormSheetPresentationController;



@interface RUIModalPresentationController : UIFormSheetPresentationController

@property (nonatomic, setter=setRUIModalPresentationStyle:) NSUInteger ruiModalPresentationStyle; // ivar: _ruiModalPresentationStyle


-(NSUInteger)modalPresentationStyle;
-(id)initWithPresentedViewController:(id)arg0 presentingViewController:(id)arg1 modalPresentationStyle:(NSUInteger)arg2 ;


@end


#endif