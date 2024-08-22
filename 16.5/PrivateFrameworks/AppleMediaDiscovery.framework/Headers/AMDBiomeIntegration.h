// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMDBIOMEINTEGRATION_H
#define AMDBIOMEINTEGRATION_H


#import <Foundation/Foundation.h>


@interface AMDBiomeIntegration : NSObject



+(id)createRowSetFrom:(id)arg0 withFetchDescriptor:(id)arg1 ;
+(id)fetchDataFromStream:(id)arg0 usingDescriptor:(id)arg1 error:(*id)arg2 ;
+(id)fetchLatestEventTimestampFromEvents:(id)arg0 ;
+(id)fetchLatestRowsFromStream:(id)arg0 withFields:(id)arg1 withBiomeTimestampDict:(id)arg2 error:(*id)arg3 ;
+(id)queryBiomeFor:(id)arg0 withError:(*id)arg1 ;
+(id)queryBiomeStream:(id)arg0 withEventFields:(id)arg1 fromTimestamp:(id)arg2 error:(*id)arg3 ;
+(id)runBiomeQuery:(id)arg0 error:(*id)arg1 ;


@end


#endif