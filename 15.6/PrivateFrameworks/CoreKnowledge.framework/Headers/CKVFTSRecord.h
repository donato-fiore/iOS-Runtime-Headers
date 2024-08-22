// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKVFTSRECORD_H
#define CKVFTSRECORD_H

@class NSString, NSUUID;
@protocol CKVDatabaseRecord;

#import <Foundation/Foundation.h>

#import "CKVOriginApp.h"

@interface CKVFTSRecord : NSObject <CKVDatabaseRecord>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSInteger fieldType; // ivar: _fieldType
@property (readonly, nonatomic) NSString *fieldValue; // ivar: _fieldValue
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger itemType; // ivar: _itemType
@property (readonly, nonatomic) CKVOriginApp *originApp; // ivar: _originApp
@property (readonly, nonatomic) NSUUID *recordId; // ivar: _recordId
@property (readonly) Class superclass;


+(id)genSQLCreateTable;
+(id)recordFromDatabaseValueRow:(id)arg0 ;
+(id)tableName;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToFTSRecord:(id)arg0 ;
-(id)init;
-(id)initWithDatabaseValueRow:(id)arg0 ;
-(id)initWithFieldType:(NSInteger)arg0 fieldValue:(id)arg1 originApp:(id)arg2 itemType:(NSInteger)arg3 recordId:(id)arg4 ;


@end


#endif