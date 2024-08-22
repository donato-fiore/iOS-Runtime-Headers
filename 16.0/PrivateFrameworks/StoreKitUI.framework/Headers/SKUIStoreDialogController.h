// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUISTOREDIALOGCONTROLLER_H
#define SKUISTOREDIALOGCONTROLLER_H

@class NSMutableArray, NSString;
@protocol UIAlertViewDelegate;

#import <Foundation/Foundation.h>


@interface SKUIStoreDialogController : NSObject <UIAlertViewDelegate>

 {
    NSMutableArray *_alerts;
    NSMutableArray *_dialogs;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(void)_performActionForDialog:(id)arg0 buttonIndex:(NSInteger)arg1 ;
-(void)alertView:(id)arg0 didDismissWithButtonIndex:(NSInteger)arg1 ;
-(void)alertViewCancel:(id)arg0 ;
-(void)presentDialog:(id)arg0 ;
-(void)presentDialog:(id)arg0 fromViewController:(id)arg1 ;


@end


#endif