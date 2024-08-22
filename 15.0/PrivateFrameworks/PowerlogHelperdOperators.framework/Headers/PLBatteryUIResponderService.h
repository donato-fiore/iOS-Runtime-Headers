// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLBATTERYUIRESPONDERSERVICE_H
#define PLBATTERYUIRESPONDERSERVICE_H

@class PLService, NSString, PLXPCResponderOperatorComposition, NSMutableDictionary;
@protocol PLBatteryUIResponseType;


#import "PLBatteryUIResponderService.h"

@interface PLBatteryUIResponderService : PLService <PLBatteryUIResponseType>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) NSString *plistCopyDestination; // ivar: _plistCopyDestination
@property (retain) PLXPCResponderOperatorComposition *queryResponder; // ivar: _queryResponder
@property (retain) NSMutableDictionary *requestedObjects; // ivar: _requestedObjects
@property (retain) NSString *requestingService; // ivar: _requestingService
@property (retain) PLBatteryUIResponderService *responderService; // ivar: _responderService
@property (retain) NSMutableDictionary *resultDictionary; // ivar: _resultDictionary
@property BOOL skipPlistWrite; // ivar: _skipPlistWrite
@property (readonly) Class superclass;


+(void)load;
-(CGFloat)endOfDay;
-(id)result;
-(void)coalesce;
-(void)configure:(id)arg0 ;
-(void)initOperatorDependancies;
-(void)run;


@end


#endif