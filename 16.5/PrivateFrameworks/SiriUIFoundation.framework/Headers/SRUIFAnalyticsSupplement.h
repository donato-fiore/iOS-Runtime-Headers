// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SRUIFANALYTICSSUPPLEMENT_H
#define SRUIFANALYTICSSUPPLEMENT_H

@class NSString, NSArray, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface SRUIFAnalyticsSupplement : NSObject {
    NSString *_lastComputedRefId;
    int _lastComputedMode;
    NSArray *_generatedAceCommands;
    NSMutableDictionary *_aceObjectDialogPhaseDictionary;
}




-(id)dialogPhaseForAceObject:(id)arg0 ;
-(int)computedModeForAceCommand:(id)arg0 ;
-(int)computedModeForRefId:(id)arg0 ;
-(void)didComputeMode:(int)arg0 forAceCommand:(id)arg1 generatedAceCommands:(id)arg2 ;
-(void)storeDialogPhasesForItemsAtIndexPaths:(id)arg0 forConversation:(id)arg1 ;


@end


#endif