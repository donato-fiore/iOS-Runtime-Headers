// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC8PAPERKIT20TOOLPICKERCONTROLLER_H
#define _TTC8PAPERKIT20TOOLPICKERCONTROLLER_H

@protocol UIPopoverPresentationControllerDelegate;

#import <Foundation/Foundation.h>


@interface _TtC8PaperKit20ToolPickerController : NSObject <UIPopoverPresentationControllerDelegate>

 {
    ? delegate;
    ? $__lazy_storage_$_textToolListViewController;
    ? $__lazy_storage_$_shapeButtonListViewController;
}




-(NSInteger)adaptivePresentationStyleForPresentationController:(id)arg0 ;
-(NSInteger)adaptivePresentationStyleForPresentationController:(id)arg0 traitCollection:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)toolPickerDidHideNotification:(id)arg0 ;
-(void)toolPickerWillShowNotification:(id)arg0 ;


@end


#endif