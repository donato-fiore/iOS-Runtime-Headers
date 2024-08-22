// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKUIEXPLICITRESTRICTIONALERTCONTROLLER_H
#define SKUIEXPLICITRESTRICTIONALERTCONTROLLER_H

@class UIViewController;

#import <Foundation/Foundation.h>

#import "SKUIClientContext.h"

@interface SKUIExplicitRestrictionAlertController : NSObject {
    SKUIClientContext *_clientContext;
    UIViewController *_presentingViewController;
}




-(id)initWithClientContext:(id)arg0 ;
-(id)initWithClientContext:(id)arg0 presentingViewController:(id)arg1 ;
-(void)presentExplicitRestrictionAlertIfNeededOfType:(NSInteger)arg0 completionBlock:(id)arg1 ;


@end


#endif