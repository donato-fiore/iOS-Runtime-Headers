// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFPARAMETERHOSTINGVIEW_H
#define WFPARAMETERHOSTINGVIEW_H

@class UIView;



@interface WFParameterHostingView : UIView {
    ? hostingController;
    ? initialState;
    ? updatedState;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)attachToParentViewController:(id)arg0 ;
-(void)configureConfigurationUIViewWithParameter:(id)arg0 state:(id)arg1 editable:(BOOL)arg2 processing:(BOOL)arg3 shouldFocus:(BOOL)arg4 variableProvider:(id)arg5 widgetFamily:(NSInteger)arg6 fillProvider:(id)arg7 overridingCellBackgroundColor:(id)arg8 updateBlock:(id)arg9 ;
-(void)configureViewWithParameter:(id)arg0 state:(id)arg1 editable:(BOOL)arg2 processing:(BOOL)arg3 shouldFocus:(BOOL)arg4 variableProvider:(id)arg5 updateBlock:(id)arg6 ;
-(void)detachFromParentViewController;


@end


#endif