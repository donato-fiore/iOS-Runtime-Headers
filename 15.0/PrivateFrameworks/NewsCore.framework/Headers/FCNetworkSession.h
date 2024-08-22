// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FCNETWORKSESSION_H
#define FCNETWORKSESSION_H

@class NSString, NSDate, NSArray;
@protocol FCNetworkSession;

#import <Foundation/Foundation.h>


@interface FCNetworkSession : NSObject <FCNetworkSession>



@property (nonatomic) NSInteger cellularRadioAccessTechnology; // ivar: _cellularRadioAccessTechnology
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSDate *endDate; // ivar: _endDate
@property (readonly, nonatomic) NSArray *eventGroups; // ivar: _eventGroups
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSDate *startDate; // ivar: _startDate
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger totalFailureCount;
@property (readonly, nonatomic) NSUInteger totalSuccessCount;
@property (nonatomic) BOOL wifiReachable; // ivar: _wifiReachable


-(id)generateSessionJSONDataWithOptions:(NSUInteger)arg0 error:(*id)arg1 ;
-(id)init;
-(void)addEventGroup:(id)arg0 ;


@end


#endif