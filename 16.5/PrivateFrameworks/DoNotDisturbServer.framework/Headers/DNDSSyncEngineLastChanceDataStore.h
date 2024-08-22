// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DNDSSYNCENGINELASTCHANCEDATASTORE_H
#define DNDSSYNCENGINELASTCHANCEDATASTORE_H

@class NSMutableDictionary, NSURL, NSString, NSDictionary;
@protocol DNDSSyncEngineLastChanceDataStoring, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface DNDSSyncEngineLastChanceDataStore : NSObject <DNDSSyncEngineLastChanceDataStoring>

 {
    NSMutableDictionary *_queue_recordsByID;
    NSURL *_url;
    NSObject<OS_dispatch_queue> *_queue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSDictionary *records;
@property (readonly) Class superclass;


-(id)_decodeRecordFromData:(id)arg0 ;
-(id)_encodedDataFromRecord:(id)arg0 ;
-(id)init;
-(id)initWithURL:(id)arg0 ;
-(id)recordWithID:(id)arg0 ;
-(id)recordsWithZoneID:(id)arg0 ;
-(void)_queue_read;
-(void)_queue_write;
-(void)addRecord:(id)arg0 ;
-(void)purge;
-(void)removeRecordWithID:(id)arg0 ;
-(void)removeRecordsWithZoneID:(id)arg0 ;


@end


#endif