// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RECORDSET_H
#define RECORDSET_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface RecordSet : NSObject {
    id *_dataFetcher;
}


@property (readonly, nonatomic) NSUInteger count;
@property (readonly, copy, nonatomic) NSDictionary *nativeRecordInfo; // ivar: _nativeRecordInfo
@property (readonly, copy, nonatomic) NSDictionary *nativeRecords; // ivar: _nativeRecords


-(id)_anyNativeRecordUUID;
-(id)initWithNativeRecords:(id)arg0 nativeRecordInfo:(id)arg1 ;
-(id)initWithNativeRecords:(id)arg0 nativeRecordInfo:(id)arg1 dataFetcher:(id)arg2 ;
-(id)nativeRecordDataForRecordUUID:(id)arg0 error:(*id)arg1 ;
-(id)nativeRecordInfoForRecordUUID:(id)arg0 ;


@end


#endif