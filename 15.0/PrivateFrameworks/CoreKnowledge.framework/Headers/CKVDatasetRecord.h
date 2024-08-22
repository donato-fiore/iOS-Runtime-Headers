// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKVDATASETRECORD_H
#define CKVDATASETRECORD_H

@class NSNumber, NSString;
@protocol CKVDatabaseRecord;

#import <Foundation/Foundation.h>

#import "CKVOriginApp.h"

@interface CKVDatasetRecord : NSObject <CKVDatabaseRecord>



@property (readonly, nonatomic) NSNumber *datasetRowId; // ivar: _datasetRowId
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger itemType; // ivar: _itemType
@property (readonly, nonatomic) CKVOriginApp *originApp; // ivar: _originApp
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSNumber *validTo; // ivar: _validTo


+(id)genSQLCreateTable;
+(id)recordFromDatabaseValueRow:(id)arg0 ;
+(id)tableName;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToDatasetRecord:(id)arg0 ;
-(id)init;
-(id)initWithDatabaseValueRow:(id)arg0 ;


@end


#endif