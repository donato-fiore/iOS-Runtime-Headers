// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TPALERTVIEWHELPER_H
#define TPALERTVIEWHELPER_H

@class UIAlertView, NSString;
@protocol UIAlertViewDelegate;

#import <Foundation/Foundation.h>


@interface TPAlertViewHelper : NSObject <UIAlertViewDelegate>

 {
    id *_completionHandler;
    UIAlertView *_alertView;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSInteger firstOtherButtonIndex;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_allHelpersArray;
+(id)_workQueue;
// +(id)alertHelperWithHandler:(id)arg0 style:(unk)arg1 title:(NSInteger)arg2 message:(id)arg3 cancelButtonTitle:(id)arg4 otherButtonTitles:(id)arg5  ;
-(id)_initWithTitle:(id)arg0 style:(NSInteger)arg1 message:(id)arg2 cancelButtonTitle:(id)arg3 otherButtonTitles:(id)arg4 ;
-(id)_underlyingAlertView;
-(void)alertView:(id)arg0 clickedButtonAtIndex:(NSInteger)arg1 ;
-(void)dealloc;
-(void)dismissWithCancelAnimated:(BOOL)arg0 ;
-(void)dismissWithClickedButtonIndexAnimated:(NSInteger)arg0 ;
-(void)setCompletionHandler:(id)arg0 ;
-(void)show;


@end


#endif