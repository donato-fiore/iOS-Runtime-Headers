// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HRHEALTHRECORDSMIGRATOR_H
#define HRHEALTHRECORDSMIGRATOR_H


#import <Foundation/Foundation.h>


@interface HRHealthRecordsMigrator : NSObject {
    ? healthStore;
    ? searchIndexController;
    ? keyValueDomain;
    ? queue;
    ? healthRecordsKeyValueDomain;
    ? dataVersionKey;
}




-(id)init;
-(id)initWithHealthStore:(id)arg0 ;
-(void)migrateIfNeededWithCompletion:(id)arg0 ;


@end


#endif