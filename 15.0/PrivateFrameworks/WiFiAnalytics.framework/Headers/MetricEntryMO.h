// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef METRICENTRYMO_H
#define METRICENTRYMO_H

@class NSManagedObject, NSDate, NSData;



@interface MetricEntryMO : NSManagedObject

@property (copy, nonatomic) NSDate *date;
@property (retain, nonatomic) NSData *eventMessage;


+(NSUInteger)metricEntryCount:(NSUInteger)arg0 moc:(id)arg1 ;
+(id)entityName;
+(id)fetchRequest;
+(id)generateInstance:(id)arg0 ;


@end


#endif