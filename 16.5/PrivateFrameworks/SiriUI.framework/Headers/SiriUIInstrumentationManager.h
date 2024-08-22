// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SIRIUIINSTRUMENTATIONMANAGER_H
#define SIRIUIINSTRUMENTATIONMANAGER_H

@class AFAnalyticsTurnBasedInstrumentationContext;
@protocol AFAnalyticsDialogIdentifierAssociationProvider;

#import <Foundation/Foundation.h>


@interface SiriUIInstrumentationManager : NSObject <AFAnalyticsDialogIdentifierAssociationProvider>



@property (readonly) AFAnalyticsTurnBasedInstrumentationContext *currentInstrumentationTurnContext;


+(id)sharedManager;
-(id)associatedDialogIdentifiersForAceObjectIdentifier:(id)arg0 ;
-(id)init;
-(void)emitUUFRPresentedEventWith:(id)arg0 snippetClass:(id)arg1 dialogIdentifier:(id)arg2 dialogPhase:(id)arg3 ;
-(void)storeCurrentInstrumentationTurnContext:(id)arg0 ;


@end


#endif