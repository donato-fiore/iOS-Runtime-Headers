// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXPROACTIVESUGGESTIONCLIENTMODEL_H
#define ATXPROACTIVESUGGESTIONCLIENTMODEL_H

@class NSString, NSXPCConnection, NSXPCListener;
@protocol ATXProactiveSuggestionClientModelProtocol, ATXProactiveSuggestionRealTimeProviderDelegateProtocol, NSXPCListenerDelegate, ATXProactiveSuggestionClientModelXPCInterface;

#import <Foundation/Foundation.h>


@interface ATXProactiveSuggestionClientModel : NSObject <ATXProactiveSuggestionClientModelProtocol, ATXProactiveSuggestionRealTimeProviderDelegateProtocol, NSXPCListenerDelegate>

 {
    NSString *_clientModelId;
    id<ATXProactiveSuggestionRealTimeProviderDelegateProtocol> *_requestDelegate;
    id<ATXProactiveSuggestionClientModelXPCInterface> *_blendingLayerServer;
    NSXPCConnection *_xpcConnection;
    NSXPCListener *_xpcListener;
}


@property (readonly, nonatomic) NSString *clientModelId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<ATXProactiveSuggestionClientModelXPCInterface> *suggestionReceiver; // ivar: _suggestionReceiver
@property (readonly) Class superclass;


+(BOOL)clientModelTypeIsEligibleForShortcutConversion:(NSInteger)arg0 ;
+(BOOL)clientModelTypeIsShortcutConversion:(NSInteger)arg0 ;
+(NSInteger)actionConversionTypeForClientModelType:(NSInteger)arg0 ;
+(NSInteger)clientModelTypeFromClientModelId:(id)arg0 ;
+(id)clientModelIdFromClientModelType:(NSInteger)arg0 ;
+(id)clientModelIdsFromClientModelTypesArray:(id)arg0 ;
+(void)refreshBlendingLayer;
+(void)refreshBlendingLayerWithReason:(id)arg0 ;
-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)blendingLayerServer;
-(id)emptyResponseForRequest:(id)arg0 ;
-(id)initWithClientModelId:(id)arg0 blendingLayerServer:(id)arg1 ;
-(id)initWithClientModelId:(id)arg0 notificationId:(id)arg1 ;
-(id)initWithClientModelId:(id)arg0 notificationId:(id)arg1 blendingLayerServer:(id)arg2 ;
-(id)initWithClientModelId:(id)arg0 requestDelegate:(id)arg1 ;
-(id)initWithClientModelId:(id)arg0 requestDelegate:(id)arg1 blendingLayerServer:(id)arg2 ;
-(id)remoteAsyncBlendingLayerServer;
-(void)dealloc;
-(void)pingWithCompletion:(id)arg0 ;
-(void)retrieveCurrentSuggestionsWithReply:(id)arg0 ;
-(void)setupRemoteClientXPCConnection;
-(void)setupXPCListenerWithClientModelId:(id)arg0 ;
-(void)suggestionsForContextualActionSuggestionRequest:(id)arg0 reply:(id)arg1 ;
-(void)suggestionsForInteractionSuggestionRequest:(id)arg0 reply:(id)arg1 ;
-(void)transmitSuggestionsToReceiver:(id)arg0 feedbackMetadata:(id)arg1 completionHandler:(id)arg2 ;
-(void)updateSuggestions:(id)arg0 ;
-(void)updateSuggestions:(id)arg0 completionHandler:(id)arg1 ;
-(void)updateSuggestions:(id)arg0 feedbackMetadata:(id)arg1 ;
-(void)updateSuggestions:(id)arg0 feedbackMetadata:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif