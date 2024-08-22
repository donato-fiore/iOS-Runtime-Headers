// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ASNAVIGATIONCONTROLLER_H
#define ASNAVIGATIONCONTROLLER_H

@class UINavigationController, UIVisualEffectView;



@interface ASNavigationController : UINavigationController {
    UIVisualEffectView *_backdropView;
}




-(struct CGSize )_adjustedContentSizeForPopover:(struct CGSize )arg0 ;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif