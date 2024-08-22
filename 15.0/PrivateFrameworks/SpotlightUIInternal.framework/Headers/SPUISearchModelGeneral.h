// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SPUISEARCHMODELGENERAL_H
#define SPUISEARCHMODELGENERAL_H

@class NSString, SPClientSession;
@protocol OS_dispatch_queue;


#import "SPUISearchModel.h"

@interface SPUISearchModelGeneral : SPUISearchModel

@property (readonly) NSString *rankingDebugLog;
@property (retain) SPClientSession *session; // ivar: _session
@property (retain) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


-(BOOL)forceStableResults;
-(BOOL)infinitePatience;
-(BOOL)queryInProgress;
-(BOOL)shouldEnableOCR;
-(NSInteger)maxUISuggestions;
-(id)init;
-(void)_setInfinitePatience:(BOOL)arg0 ;
-(void)activate;
-(void)clear;
-(void)deactivate;
-(void)setForceStableResults:(BOOL)arg0 ;
-(void)setInfinitePatience:(BOOL)arg0 ;
-(void)setMaxUISuggestions:(NSInteger)arg0 ;
-(void)updateWithQueryContext:(id)arg0 ;
-(void)updatesDisabled;
-(void)updatesEnabled;


@end


#endif