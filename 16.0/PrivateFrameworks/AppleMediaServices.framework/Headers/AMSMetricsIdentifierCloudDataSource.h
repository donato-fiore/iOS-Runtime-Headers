// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AMSMETRICSIDENTIFIERCLOUDDATASOURCE_H
#define AMSMETRICSIDENTIFIERCLOUDDATASOURCE_H

@protocol AMSMetricsIdentifierCloudDataSourceDelegate;

#import <Foundation/Foundation.h>


@interface AMSMetricsIdentifierCloudDataSource : NSObject

@property (weak, nonatomic) NSObject<AMSMetricsIdentifierCloudDataSourceDelegate> *delegate; // ivar: _delegate


+(id)_database;
+(id)_sharedQueue;
+(void)cleanupIdentifiers;
+(void)clearSyncState;
+(void)removeAllRecords;
-(id)_createRecordForIdentifier:(id)arg0 ;
-(id)_createRecordForIdentifierStore:(id)arg0 ;
-(id)_parseRecord:(id)arg0 error:(*id)arg1 ;
-(void)fetchModifiedRecordsWithCompletion:(id)arg0 ;
-(void)removeRecordWithIdentifier:(id)arg0 ;
-(void)saveRecord:(id)arg0 isServerRecord:(BOOL)arg1 ;


@end


#endif