// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef USERACTIVITYCONTROLLER_H
#define USERACTIVITYCONTROLLER_H

@class NSTimer;

#import <Foundation/Foundation.h>

#import "BrowserController.h"
#import "TabDocument.h"

@interface UserActivityController : NSObject {
    NSTimer *_tabCreationDelayTimer;
}


@property (readonly, weak, nonatomic) BrowserController *browserController; // ivar: _browserController
@property (weak, nonatomic) TabDocument *tabDocumentPendingUserActivityPayload; // ivar: _tabDocumentPendingUserActivityPayload


-(BOOL)continueUserActivity:(id)arg0 ;
-(BOOL)willContinueUserActivityWithType:(id)arg0 ;
-(id)_tabDocumentWithURL:(id)arg0 ;
-(id)initWithBrowserController:(id)arg0 ;
-(void)_invalidateTabCreationDelayTimer;
-(void)_prepareTabDocumentForNewUserActivity;
-(void)_prepareTabDocumentForNewUserActivityWithDelay:(CGFloat)arg0 ;
-(void)didFailToContinueUserActivityWithType:(id)arg0 error:(id)arg1 ;


@end


#endif