// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC9COREIDVUI27BINDINGFACEIDVIEWCONTROLLER_H
#define _TTC9COREIDVUI27BINDINGFACEIDVIEWCONTROLLER_H

@class TtC9CoreIDVUI30BiometricBindingViewController;
@protocol LAUIDelegate;



@interface _TtC9CoreIDVUI27BindingFaceIDViewController : TtC9CoreIDVUI30BiometricBindingViewController <LAUIDelegate>

 {
    ? glyph;
    ? hasReceivedFaceIDEvents;
}




-(id)initWithCoder:(id)arg0 ;
-(void)event:(NSInteger)arg0 params:(id)arg1 reply:(id)arg2 ;
-(void)loadView;
-(void)viewDidLoad;


@end


#endif