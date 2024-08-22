// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLBATTERYUIRESPONDERSERVICE_H
#define PLBATTERYUIRESPONDERSERVICE_H

@class PLService, NSDictionary, NSString, NSMutableArray, NSOperationQueue, PLXPCResponderOperatorComposition, NSMutableDictionary;
@protocol PLBatteryUIResponseProtocol;


#import "PLBatteryUIResponderService.h"

@interface PLBatteryUIResponderService : PLService <PLBatteryUIResponseProtocol>



@property (retain) NSDictionary *configuration; // ivar: _configuration
@property (readonly, copy) NSString *debugDescription;
@property (retain) NSMutableArray *dependencies; // ivar: _dependencies
@property (readonly, copy) NSString *description;
@property (retain) NSMutableArray *executionChain; // ivar: _executionChain
@property (readonly) NSUInteger hash;
@property (retain) NSOperationQueue *operationQueue; // ivar: _operationQueue
@property (retain) NSMutableArray *orderOfExecution; // ivar: _orderOfExecution
@property (retain) NSString *plistCopyDestination; // ivar: _plistCopyDestination
@property (retain) PLXPCResponderOperatorComposition *queryResponder; // ivar: _queryResponder
@property (retain) NSMutableDictionary *requestedObjects; // ivar: _requestedObjects
@property (retain) NSString *requestingService; // ivar: _requestingService
@property (retain) PLBatteryUIResponderService *responderService; // ivar: _responderService
@property (retain) NSMutableDictionary *responseCache; // ivar: _responseCache
@property (retain) NSMutableDictionary *resultDictionary; // ivar: _resultDictionary
@property (retain) NSMutableDictionary *sharedUtilityCache; // ivar: _sharedUtilityCache
@property BOOL skipPlistWrite; // ivar: _skipPlistWrite
@property (readonly) Class superclass;


+(void)load;
-(BOOL)demoMode;
-(CGFloat)endOfDayWithNow:(id)arg0 ;
-(CGFloat)endOfHourWithNow:(id)arg0 ;
-(id)constructResponseObjectFromType:(NSInteger)arg0 ;
-(id)convertResponseToLegacyFormat:(id)arg0 ;
-(id)demoPath;
-(id)result;
-(void)cleanup;
-(void)coalesce;
-(void)configure:(id)arg0 ;
-(void)initOperatorDependancies;
-(void)linkDependencies;
-(void)run;


@end


#endif