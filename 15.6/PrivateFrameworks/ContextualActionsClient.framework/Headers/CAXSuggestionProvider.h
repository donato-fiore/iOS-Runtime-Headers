// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CAXSUGGESTIONPROVIDER_H
#define CAXSUGGESTIONPROVIDER_H

@class ATXProactiveSuggestionClientModel, NSString;
@protocol ATXProactiveSuggestionRealTimeProviderDelegateProtocol;

#import <Foundation/Foundation.h>


@interface CAXSuggestionProvider : NSObject <ATXProactiveSuggestionRealTimeProviderDelegateProtocol>

 {
    ATXProactiveSuggestionClientModel *_clientModel;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)predictWithPredictionContext:(id)arg0 candidateActions:(id)arg1 maxSuggestions:(NSUInteger)arg2 ;
-(id)proactiveSuggestionForCaxContextualAction:(id)arg0 clientModelSpec:(id)arg1 ;
-(void)pingWithCompletion:(id)arg0 ;
-(void)recordShortcutsEditorEvent:(id)arg0 ;
-(void)registerModelForRealTimeRequestsWithBlendingLayerServer:(id)arg0 ;
-(void)suggestionsForContextualActionSuggestionRequest:(id)arg0 reply:(id)arg1 ;


@end


#endif