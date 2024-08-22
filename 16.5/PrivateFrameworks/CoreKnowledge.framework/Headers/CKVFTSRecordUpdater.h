// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKVFTSRECORDUPDATER_H
#define CKVFTSRECORDUPDATER_H

@class NSString, NSNumber, NSMutableDictionary;
@protocol CKVDatabaseReadWriteAccess;

#import <Foundation/Foundation.h>


@interface CKVFTSRecordUpdater : NSObject {
    NSObject<CKVDatabaseReadWriteAccess> *_database;
    NSString *_originAppId;
    NSNumber *_itemTypeNumber;
    NSMutableDictionary *_commandCache;
}




-(BOOL)deleteDataset;
-(BOOL)deleteRecordId:(id)arg0 ;
-(BOOL)deleteRecordIds:(id)arg0 ;
-(BOOL)insertRecordsFromItem:(id)arg0 recordId:(id)arg1 ;
-(id)description;
-(id)initWithDatabase:(id)arg0 originAppId:(id)arg1 itemType:(NSInteger)arg2 ;


@end


#endif