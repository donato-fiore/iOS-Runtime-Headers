// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTCVV10WORKFLOWUI19SHORTCUTDETAILSVIEW19ADDTOHOMESCREENVIEW11COORDINATOR_H
#define _TTCVV10WORKFLOWUI19SHORTCUTDETAILSVIEW19ADDTOHOMESCREENVIEW11COORDINATOR_H

@protocol WFAddToHomeScreenActivityDelegate;

#import <Foundation/Foundation.h>


@interface _TtCVV10WorkflowUI19ShortcutDetailsView19AddToHomeScreenView11Coordinator : NSObject <WFAddToHomeScreenActivityDelegate>

 {
    ? activity;
}




-(id)init;
-(void)homeScreenActivityDidFinish:(id)arg0 success:(BOOL)arg1 ;


@end


#endif