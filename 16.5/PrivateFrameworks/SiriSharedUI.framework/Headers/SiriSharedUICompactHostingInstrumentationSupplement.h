// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SIRISHAREDUICOMPACTHOSTINGINSTRUMENTATIONSUPPLEMENT_H
#define SIRISHAREDUICOMPACTHOSTINGINSTRUMENTATIONSUPPLEMENT_H

@class SRUIFInstrumentationManager;

#import <Foundation/Foundation.h>


@interface SiriSharedUICompactHostingInstrumentationSupplement : NSObject {
    SRUIFInstrumentationManager *_instrumentationManager;
}




-(BOOL)_shouldCreateNewTurnForSiriViewControllerInteraction:(id)arg0 sashItem:(id)arg1 ;
-(id)initWithInstrumentationManager:(id)arg0 ;
-(int)viewRegionForPresentedAceObject:(id)arg0 resultTrasncriptItems:(id)arg1 conversationTranscriptItems:(id)arg2 serverUtterances:(id)arg3 ;
-(void)_logPunchOutEventForSiriViewController:(id)arg0 aceCommand:(id)arg1 URL:(id)arg2 appID:(id)arg3 sashItem:(id)arg4 shouldCreateNewTurn:(BOOL)arg5 ;
-(void)configureSiriViewControllerWithCurrentTurn:(id)arg0 ;
-(void)logDrillInInteractionForSnippetViewControllerIfNecessary:(id)arg0 ;
-(void)logPunchOutEventForSiriViewController:(id)arg0 aceCommand:(id)arg1 URL:(id)arg2 appID:(id)arg3 sashItem:(id)arg4 ;
-(void)logPunchOutEventForSiriViewController:(id)arg0 aceCommands:(id)arg1 sashItem:(id)arg2 ;


@end


#endif