// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMBLOCALZONEPROCESSTUPLE_H
#define HMBLOCALZONEPROCESSTUPLE_H

@class HMFObject, NSArray, NSData, NSUUID, NSString, NSNumber;


#import "HMBLocalZoneProcessModelContext.h"
#import "HMBModel.h"
#import "HMBLocalSQLQueryTable.h"

@interface HMBLocalZoneProcessTuple : HMFObject

@property (readonly, nonatomic) NSArray *encodedQueryableColumns; // ivar: _encodedQueryableColumns
@property (readonly, nonatomic) NSData *externalID; // ivar: _externalID
@property (readonly, nonatomic) NSUInteger itemRow; // ivar: _itemRow
@property (readonly, nonatomic) HMBLocalZoneProcessModelContext *mergedContext; // ivar: _mergedContext
@property (readonly, nonatomic) NSUUID *modelSchema; // ivar: _modelSchema
@property (readonly, nonatomic) NSString *modelType; // ivar: _modelType
@property (readonly, copy, nonatomic) NSNumber *outputBlockRow; // ivar: _outputBlockRow
@property (readonly, copy, nonatomic) HMBModel *outputModel; // ivar: _outputModel
@property (readonly, nonatomic) HMBLocalZoneProcessModelContext *previousContext; // ivar: _previousContext
@property (readonly, nonatomic) HMBLocalSQLQueryTable *queryTable; // ivar: _queryTable
@property (readonly, nonatomic) NSUInteger recordRow; // ivar: _recordRow
@property (readonly, copy, nonatomic) HMBModel *updateModel; // ivar: _updateModel


-(id)initWithPreviousContext:(id)arg0 mergedContext:(id)arg1 updateModel:(id)arg2 outputModel:(id)arg3 outputBlockRow:(id)arg4 recordRow:(NSUInteger)arg5 itemRow:(NSUInteger)arg6 modelSchema:(id)arg7 modelType:(id)arg8 externalID:(id)arg9 queryTable:(id)arg10 ;


@end


#endif