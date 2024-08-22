// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC7SWIFTUI27POPOVERPRESENTATIONDELEGATE_H
#define _TTC7SWIFTUI27POPOVERPRESENTATIONDELEGATE_H

@protocol UIPopoverPresentationControllerDelegate;

#import <Foundation/Foundation.h>


@interface _TtC7SwiftUI27PopoverPresentationDelegate : NSObject <UIPopoverPresentationControllerDelegate>

 {
    ? delegate;
}




-(BOOL)presentationControllerShouldDismiss:(id)arg0 ;
-(NSInteger)adaptivePresentationStyleForPresentationController:(id)arg0 traitCollection:(id)arg1 ;
-(id)init;
-(void)popoverPresentationController:(id)arg0 willRepositionPopoverToRect:(struct CGRect *)arg1 inView:(*id)arg2 ;
-(void)prepareForPopoverPresentation:(id)arg0 ;


@end


#endif