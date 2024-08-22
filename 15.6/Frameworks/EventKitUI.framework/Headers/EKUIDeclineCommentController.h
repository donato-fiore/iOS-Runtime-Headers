// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EKUIDECLINECOMMENTCONTROLLER_H
#define EKUIDECLINECOMMENTCONTROLLER_H

@class UIAlertController, UITextField;

#import <Foundation/Foundation.h>


@interface EKUIDeclineCommentController : NSObject {
    UIAlertController *_alertController;
    UITextField *_alertTextField;
    id *_completionBlock;
}




+(id)_newDeclineCommentControllerWithCompletionBlock:(id)arg0 ;
+(id)presentDeclineCommentAlertWithOrganizer:(id)arg0 currentComment:(id)arg1 viewController:(id)arg2 completionBlock:(id)arg3 ;
-(void)_completeWithButton:(NSUInteger)arg0 ;
-(void)_presentAlertWithOrganizer:(id)arg0 currentComment:(id)arg1 viewController:(id)arg2 ;
-(void)dealloc;
-(void)dismissAnimated:(BOOL)arg0 ;


@end


#endif