// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ACHACTIVITYSUMMARYITERATOR_H
#define ACHACTIVITYSUMMARYITERATOR_H

@class NSCalendar, NSString, HKHealthStore, HKTaskServerProxyProvider;
@protocol _HKXPCExportable;

#import <Foundation/Foundation.h>


@interface ACHActivitySummaryIterator : NSObject <_HKXPCExportable>



@property (retain, nonatomic) NSCalendar *calendar; // ivar: _calendar
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HKHealthStore *healthStore; // ivar: _healthStore
@property (nonatomic) BOOL includePrivateProperties; // ivar: _includePrivateProperties
@property (retain, nonatomic) HKTaskServerProxyProvider *proxyProvider; // ivar: _proxyProvider
@property (readonly) Class superclass;


-(id)exportedInterface;
-(id)initWithHealthStore:(id)arg0 shouldIncludePrivateProperties:(BOOL)arg1 ;
-(id)newEmptyActivitySummaryFromSummary:(id)arg0 ;
-(id)remoteInterface;
-(void)connectionInvalidated;
// -(void)enumerateActivitySummariesForDateComponentInterval:(id)arg0 handler:(id)arg1 errorHandler:(unk)arg2  ;


@end


#endif