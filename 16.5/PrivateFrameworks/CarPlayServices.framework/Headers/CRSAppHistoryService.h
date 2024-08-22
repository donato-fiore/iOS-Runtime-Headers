// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CRSAPPHISTORYSERVICE_H
#define CRSAPPHISTORYSERVICE_H

@class FBSApplicationLibrary, NSHashTable, NSString, FBSALOToken, NSArray, BSServiceConnectionListener, CRCarPlayAppPolicyEvaluator;
@protocol BSServiceConnectionListenerDelegate, CARAppHistoryClientToServerInterface, BSInvalidatable, OS_dispatch_queue, CRSAppHistoryDataProviding;

#import <Foundation/Foundation.h>


@interface CRSAppHistoryService : NSObject <BSServiceConnectionListenerDelegate, CARAppHistoryClientToServerInterface, BSInvalidatable>



@property (retain, nonatomic) FBSApplicationLibrary *applicationLibrary; // ivar: _applicationLibrary
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *connectionQueue; // ivar: _connectionQueue
@property (retain, nonatomic) NSHashTable *connections; // ivar: _connections
@property (weak, nonatomic) NSObject<CRSAppHistoryDataProviding> *dataProvider; // ivar: _dataProvider
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) FBSALOToken *installToken; // ivar: _installToken
@property (copy, nonatomic) NSArray *instrumentClusterURLs; // ivar: _instrumentClusterURLs
@property (retain, nonatomic) BSServiceConnectionListener *listener; // ivar: _listener
@property (retain, nonatomic) CRCarPlayAppPolicyEvaluator *policyEvaluator; // ivar: _policyEvaluator
@property (retain, nonatomic) FBSALOToken *replaceToken; // ivar: _replaceToken
@property (readonly) Class superclass;
@property (retain, nonatomic) FBSALOToken *uninstallToken; // ivar: _uninstallToken


-(id)initWithDataProvider:(id)arg0 applicationLibrary:(id)arg1 policyEvaluator:(id)arg2 ;
-(void)_appLibraryUpdated:(id)arg0 ;
-(void)_connectionQueue_addConnection:(id)arg0 ;
-(void)_connectionQueue_removeConnection:(id)arg0 ;
-(void)_setupApplicationLibraryObservations;
-(void)fetchSessionEchoContextStatesWithCompletion:(id)arg0 ;
-(void)fetchSessionFeatureKeysWithCompletion:(id)arg0 ;
-(void)fetchSessionUIContextStatesWithCompletion:(id)arg0 ;
-(void)fetchUIContextStatesWithCompletion:(id)arg0 ;
-(void)invalidate;
-(void)listener:(id)arg0 didReceiveConnection:(id)arg1 withContext:(id)arg2 ;
-(void)serviceFetchInstrumentClusterURLs:(id)arg0 ;
-(void)setAnalyticsValues:(id)arg0 completion:(id)arg1 ;
-(void)setSessionFeatureKeys:(id)arg0 completion:(id)arg1 ;


@end


#endif