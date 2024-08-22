// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTKTIMELINEDATASOURCEWRAPPER_H
#define NTKTIMELINEDATASOURCEWRAPPER_H

@class NSString;
@protocol TLTimelineDataSource, CLKComplicationDataSource;

#import <Foundation/Foundation.h>


@interface NTKTimelineDataSourceWrapper : NSObject <TLTimelineDataSource>



@property (readonly, nonatomic) NSObject<CLKComplicationDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithDataSource:(id)arg0 ;
-(void)tl_getCurrentTimelineEntryForIdentifiable:(id)arg0 withHandler:(id)arg1 ;
-(void)tl_getTimelineEntriesForIdentifiable:(id)arg0 afterDate:(id)arg1 limit:(NSUInteger)arg2 withHandler:(id)arg3 ;


@end


#endif