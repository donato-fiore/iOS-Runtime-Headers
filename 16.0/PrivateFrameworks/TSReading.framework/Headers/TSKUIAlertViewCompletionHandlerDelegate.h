// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSKUIALERTVIEWCOMPLETIONHANDLERDELEGATE_H
#define TSKUIALERTVIEWCOMPLETIONHANDLERDELEGATE_H

@class NSString;
@protocol UIAlertViewDelegate;

#import <Foundation/Foundation.h>


@interface TSKUIAlertViewCompletionHandlerDelegate : NSObject <UIAlertViewDelegate>



@property (copy, nonatomic) id *completionHandler; // ivar: mCompletionHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)alertView:(id)arg0 didDismissWithButtonIndex:(NSInteger)arg1 ;
-(void)dealloc;


@end


#endif