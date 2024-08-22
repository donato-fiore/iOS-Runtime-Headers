// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC9COREIDVUI28BINDINGTOUCHIDVIEWCONTROLLER_H
#define _TTC9COREIDVUI28BINDINGTOUCHIDVIEWCONTROLLER_H

@class TtC9CoreIDVUI30BiometricBindingViewController;
@protocol LAUIDelegate;



@interface _TtC9CoreIDVUI28BindingTouchIDViewController : TtC9CoreIDVUI30BiometricBindingViewController <LAUIDelegate>

 {
    ? hasObtainedTouchIDMatch;
    ? $__lazy_storage_$_glyph;
    ? $__lazy_storage_$_glyphContainerView;
}




-(id)initWithCoder:(id)arg0 ;
-(void)event:(NSInteger)arg0 params:(id)arg1 reply:(id)arg2 ;
-(void)loadView;
-(void)viewDidAppear:(BOOL)arg0 ;


@end


#endif