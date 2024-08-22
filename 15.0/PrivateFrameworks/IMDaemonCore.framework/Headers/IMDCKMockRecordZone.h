// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IMDCKMOCKRECORDZONE_H
#define IMDCKMOCKRECORDZONE_H

@class NSString, IDSKVStore;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface IMDCKMockRecordZone : NSObject

@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain, nonatomic) IDSKVStore *recordStore; // ivar: _recordStore


-(NSUInteger)_fetchResultLimit:(id)arg0 ;
-(id)_ckRecordFromData:(id)arg0 ;
-(id)_fetchRecordZoneChangesOptionsFromOperation:(id)arg0 ;
-(id)_kvStorePath;
-(id)_serializedCKRecordData:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 ;
-(void)_handleFetchZoneChangesOperation:(id)arg0 ;
-(void)_handleModifyRecordsOperation:(id)arg0 ;
-(void)dealloc;
-(void)handleOperation:(id)arg0 ;


@end


#endif