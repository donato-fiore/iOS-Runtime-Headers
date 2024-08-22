// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef APUITVINTENTHANDLER_H
#define APUITVINTENTHANDLER_H

@class ATXAction, NSString;
@protocol APUIWFLIntentControllerDelegate, ATXTVIntentHandler;

#import <Foundation/Foundation.h>

#import "APUIWFLIntentController.h"

@interface APUITVIntentHandler : NSObject <APUIWFLIntentControllerDelegate, ATXTVIntentHandler>

 {
    ATXAction *_action;
    APUIWFLIntentController *_intentController;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithTVAction:(id)arg0 context:(NSInteger)arg1 ;
-(void)_punchToAppWithIntent:(id)arg0 ;
-(void)executeTVActionWithCompletion:(id)arg0 ;
-(void)intentController:(id)arg0 didFailWithError:(id)arg1 forInteraction:(id)arg2 ;
-(void)intentController:(id)arg0 didHandleInteraction:(id)arg1 ;
-(void)intentController:(id)arg0 requiresConfirmationForIntent:(id)arg1 intentResponse:(id)arg2 ;
-(void)intentController:(id)arg0 requiresContinuingInAppForIntent:(id)arg1 proceedHandler:(id)arg2 ;
-(void)intentControllerDidFailAuthorizationCheck:(id)arg0 ;


@end


#endif