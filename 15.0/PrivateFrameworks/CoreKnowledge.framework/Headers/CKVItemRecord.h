// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKVITEMRECORD_H
#define CKVITEMRECORD_H

@class NSNumber, NSString, NSData, NSUUID;
@protocol CKVDatabaseRecord;

#import <Foundation/Foundation.h>

#import "CKVItem.h"

@interface CKVItemRecord : NSObject <CKVDatabaseRecord>



@property (readonly, nonatomic) NSNumber *datasetRowId; // ivar: _datasetRowId
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CKVItem *item; // ivar: _item
@property (readonly, nonatomic) NSData *itemBuffer; // ivar: _itemBuffer
@property (readonly, nonatomic) NSNumber *itemIdHash; // ivar: _itemIdHash
@property (readonly, nonatomic) NSUUID *recordId; // ivar: _recordId
@property (readonly) Class superclass;


+(id)genSQLCreateTable;
+(id)recordFromDatabaseValueRow:(id)arg0 ;
+(id)tableName;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToItemRecord:(id)arg0 ;
-(id)init;
-(id)initWithDatabaseValueRow:(id)arg0 ;


@end


#endif