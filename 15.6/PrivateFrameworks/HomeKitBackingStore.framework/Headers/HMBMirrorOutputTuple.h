// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMBMIRROROUTPUTTUPLE_H
#define HMBMIRROROUTPUTTUPLE_H

@class HMFObject, NSData;


#import "HMBModel.h"
#import "HMBLocalSQLQueryTable.h"

@interface HMBMirrorOutputTuple : HMFObject

@property (copy, nonatomic) NSData *externalData; // ivar: _externalData
@property (copy, nonatomic) NSData *externalID; // ivar: _externalID
@property (readonly, nonatomic) HMBModel *model; // ivar: _model
@property (readonly) NSUInteger outputBlockRow; // ivar: _outputBlockRow
@property (readonly, nonatomic) HMBLocalSQLQueryTable *queryTable; // ivar: _queryTable
@property (readonly) NSUInteger recordRow; // ivar: _recordRow


-(id)attributeDescriptions;
-(id)initWithOutputBlockRow:(NSUInteger)arg0 recordRow:(NSUInteger)arg1 model:(id)arg2 queryTable:(id)arg3 externalID:(id)arg4 externalData:(id)arg5 ;


@end


#endif