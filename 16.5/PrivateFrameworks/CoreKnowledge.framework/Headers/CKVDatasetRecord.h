// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKVDATASETRECORD_H
#define CKVDATASETRECORD_H

@class NSNumber, NSString;
@protocol CKVDatabaseRecord;

#import <Foundation/Foundation.h>


@interface CKVDatasetRecord : NSObject <CKVDatabaseRecord>



@property (readonly, nonatomic) NSNumber *datasetRowId; // ivar: _datasetRowId
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *deviceId; // ivar: _deviceId
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger itemType; // ivar: _itemType
@property (readonly, nonatomic) NSNumber *modified; // ivar: _modified
@property (readonly, nonatomic) NSUInteger options; // ivar: _options
@property (readonly, nonatomic) NSString *originAppId; // ivar: _originAppId
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *userId; // ivar: _userId
@property (readonly, nonatomic) NSNumber *validityHash; // ivar: _validityHash
@property (readonly, nonatomic) NSUInteger version; // ivar: _version


+(id)_optionsDescription:(NSUInteger)arg0 ;
+(id)genSQLCreateTable;
+(id)recordFromDatabaseValueRow:(id)arg0 ;
+(id)tableName;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToDatasetRecord:(id)arg0 ;
-(BOOL)isRanked;
-(id)init;
-(id)initWithDatabaseValueRow:(id)arg0 ;
-(id)recordToDatasetInfoWithItemCount:(unsigned int)arg0 capturedTime:(id)arg1 error:(*id)arg2 ;


@end


#endif