// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AMDSTORAGE_H
#define AMDSTORAGE_H


#import <Foundation/Foundation.h>


@interface AMDStorage : NSObject



+(id)fetchCoreDataRecordsFrom:(id)arg0 error:(*id)arg1 ;
+(id)fetchRecordsFrom:(id)arg0 error:(*id)arg1 ;
+(unsigned int)deleteCoreDataRecordsFrom:(id)arg0 usingPredicates:(id)arg1 error:(*id)arg2 ;
+(unsigned int)deleteRecordsFrom:(id)arg0 usingPredicates:(id)arg1 error:(*id)arg2 ;
+(unsigned int)saveRecords:(id)arg0 inTable:(id)arg1 error:(*id)arg2 ;
+(unsigned int)saveRecordsToCoreData:(id)arg0 inTable:(id)arg1 error:(*id)arg2 ;


@end


#endif