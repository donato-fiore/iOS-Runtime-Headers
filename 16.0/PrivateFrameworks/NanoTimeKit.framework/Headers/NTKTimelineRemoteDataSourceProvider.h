// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTKTIMELINEREMOTEDATASOURCEPROVIDER_H
#define NTKTIMELINEREMOTEDATASOURCEPROVIDER_H

@class NSString, NSOperationQueue;
@protocol TLTimelineDataSourceProvider, CLKComplicationDataSource;

#import <Foundation/Foundation.h>

#import "NTKTimelineDataSourceWrapper.h"

@interface NTKTimelineRemoteDataSourceProvider : NSObject <TLTimelineDataSourceProvider>



@property (readonly, nonatomic) NSObject<CLKComplicationDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSOperationQueue *operationQueue; // ivar: _operationQueue
@property (readonly) Class superclass;
@property (readonly, nonatomic) CGFloat timeout; // ivar: _timeout
@property (readonly, nonatomic) NTKTimelineDataSourceWrapper *wrapper; // ivar: _wrapper


-(id)initWithDataSource:(id)arg0 ;
-(void)getCurrentEntryForComplication:(id)arg0 completion:(id)arg1 ;
-(void)getEntriesForComplication:(id)arg0 afterDate:(id)arg1 limit:(NSUInteger)arg2 completion:(id)arg3 ;
-(void)tl_getDataSourceWithCompletion:(id)arg0 ;


@end


#endif