// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKVITEMMETARECORD_H
#define CKVITEMMETARECORD_H

@class NSNumber, NSString, NSUUID;
@protocol CKVDatabaseRecord;

#import <Foundation/Foundation.h>


@interface CKVItemMetaRecord : NSObject <CKVDatabaseRecord>



@property (readonly, nonatomic) NSNumber *created; // ivar: _created
@property (readonly, nonatomic) NSNumber *datasetRowId; // ivar: _datasetRowId
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSNumber *itemBufferHash; // ivar: _itemBufferHash
@property (readonly, nonatomic) NSNumber *itemIdHash; // ivar: _itemIdHash
@property (readonly, nonatomic) NSNumber *modified; // ivar: _modified
@property (readonly, nonatomic) NSNumber *rank; // ivar: _rank
@property (readonly, nonatomic) NSUUID *recordId; // ivar: _recordId
@property (readonly) Class superclass;


+(id)genSQLCreateTable;
+(id)recordFromDatabaseValueRow:(id)arg0 ;
+(id)tableName;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToItemMetaRecord:(id)arg0 ;
-(id)init;
-(id)initWithDatabaseValueRow:(id)arg0 ;


@end


#endif