// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKWORKOUTROUTEQUERY_H
#define HKWORKOUTROUTEQUERY_H

@class NSString;
@protocol HKWorkoutRouteQueryClientInterface;


#import "HKQuery.h"
#import "HKWorkoutRoute.h"

@interface HKWorkoutRouteQuery : HKQuery <HKWorkoutRouteQueryClientInterface>

 {
    HKWorkoutRoute *_series;
}


@property (copy) id *dataHandler; // ivar: _dataHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(Class)configurationClass;
+(id)clientInterfaceProtocol;
+(void)configureClientInterface:(id)arg0 ;
-(id)initWithRoute:(id)arg0 dataHandler:(id)arg1 ;
-(void)client_deliverWorkoutRouteLocations:(id)arg0 isFinal:(BOOL)arg1 query:(id)arg2 ;
-(void)queue_deliverError:(id)arg0 ;
-(void)queue_populateConfiguration:(id)arg0 ;
-(void)queue_queryDidDeactivate:(id)arg0 ;


@end


#endif