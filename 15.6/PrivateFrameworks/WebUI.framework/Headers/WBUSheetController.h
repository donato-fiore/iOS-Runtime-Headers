// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WBUSHEETCONTROLLER_H
#define WBUSHEETCONTROLLER_H

@class UIAlertController, NSMutableArray;

#import <Foundation/Foundation.h>

#import "WebUIAlert.h"

@interface WBUSheetController : NSObject {
    UIAlertController *_alertController;
    WebUIAlert *_alert;
    NSMutableArray *_alertInvocationQueue;
    id *_delegate;
}




+(id)alertControllerForAlert:(id)arg0 automaticallyDismiss:(BOOL)arg1 withCompletionHandler:(id)arg2 ;
-(id)initWithDelegate:(id)arg0 ;
-(void)_alertDidDismissWithAction:(int)arg0 ;
-(void)hideSheet;
-(void)setDelegate:(id)arg0 ;
-(void)showSheetForAlert:(id)arg0 ;
-(void)showSheetForAlert:(id)arg0 inView:(id)arg1 ;


@end


#endif