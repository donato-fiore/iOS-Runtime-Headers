// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXACTIONPREDICTIONSERVER_H
#define ATXACTIONPREDICTIONSERVER_H

@class NSXPCListener, NSString, NSXPCListenerEndpoint;
@protocol NSXPCListenerDelegate, ATXActionPredictionInterface;

#import <Foundation/Foundation.h>


@interface ATXActionPredictionServer : NSObject <NSXPCListenerDelegate, ATXActionPredictionInterface>

 {
    NSXPCListener *_listener;
    BOOL _checkEntitlements;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSXPCListenerEndpoint *endpoint;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)init;
-(id)initAnonymousListener;
-(id)initWithListener:(id)arg0 checkEntitlements:(BOOL)arg1 ;
-(void)dealloc;
-(void)getActionPredictionsForCandidateBundleIdentifiers:(id)arg0 candidateActionTypes:(id)arg1 consumerType:(NSUInteger)arg2 consumerSubType:(unsigned char)arg3 limit:(int)arg4 reply:(id)arg5 ;
-(void)getActionPredictionsForContext:(id)arg0 includeBundleIds:(id)arg1 excludeBundleIds:(id)arg2 includeActionTypes:(id)arg3 excludeActionTypes:(id)arg4 limit:(NSUInteger)arg5 reply:(id)arg6 ;
-(void)removeActionPredictionNotificationsMatchingSuggestion:(id)arg0 reply:(id)arg1 ;
-(void)shouldDisplayDailyRoutineForContext:(id)arg0 reply:(id)arg1 ;


@end


#endif