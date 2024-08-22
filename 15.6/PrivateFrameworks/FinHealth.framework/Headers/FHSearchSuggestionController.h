// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FHSEARCHSUGGESTIONCONTROLLER_H
#define FHSEARCHSUGGESTIONCONTROLLER_H

@class NSXPCConnection;
@protocol FHSuggestionDelegate;

#import <Foundation/Foundation.h>


@interface FHSearchSuggestionController : NSObject

@property (retain, nonatomic) NSXPCConnection *connection; // ivar: _connection
@property (weak, nonatomic) NSObject<FHSuggestionDelegate> *delegate; // ivar: _delegate
@property (nonatomic) os_unfair_lock_s lockConnection; // ivar: _lockConnection


-(id)_clientConnection;
-(id)_newClientConnection;
-(id)_remoteObjectInterface;
-(id)_remoteObjectProxyWithErrorHandler;
-(id)initWithDelegate:(id)arg0 ;
-(void)_sendAllTransactionFeatures:(BOOL)arg0 ;
-(void)aggregateFeaturesWithHandler:(id)arg0 ;
-(void)dealloc;
-(void)deleteAllData:(id)arg0 ;
-(void)deleteDataForPassesWithSourceIdentifiers:(id)arg0 completion:(id)arg1 ;
-(void)deleteTransactionByTransactionIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)featureResponsesForApplication:(id)arg0 withCompletion:(id)arg1 ;
-(void)featuresForApplication:(id)arg0 withCompletion:(id)arg1 ;
-(void)featuresWithCompletion:(id)arg0 ;
-(void)getSerializedTrialValues:(id)arg0 ;
-(void)reevaluateTransactionFeatures;
-(void)sendAllTransactionFeatures;
-(void)transactionUpdated:(id)arg0 deferFeatureComputation:(BOOL)arg1 completion:(id)arg2 ;
-(void)transactionsRequireSyncing;


@end


#endif