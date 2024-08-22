// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKVITEMMETARECORD_H
#define CKVITEMMETARECORD_H

@class NSNumber, NSString, NSUUID;
@protocol CKVDatabaseRecord;

#import <Foundation/Foundation.h>


@interface CKVItemMetaRecord : NSObject <CKVDatabaseRecord>



@property (readonly, nonatomic) NSNumber *datasetRowId; // ivar: _datasetRowId
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSNumber *itemBufferHash; // ivar: _itemBufferHash
@property (readonly, nonatomic) NSNumber *itemIdHash; // ivar: _itemIdHash
@property (readonly, nonatomic) NSUUID *recordId; // ivar: _recordId
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSNumber *validFrom; // ivar: _validFrom
@property (readonly, nonatomic) NSNumber *validTo; // ivar: _validTo


+(id)genSQLCreateTable;
+(id)recordFromDatabaseValueRow:(id)arg0 ;
+(id)tableName;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToItemMetaRecord:(id)arg0 ;
-(id)init;
-(id)initWithDatabaseValueRow:(id)arg0 ;


@end


#endif