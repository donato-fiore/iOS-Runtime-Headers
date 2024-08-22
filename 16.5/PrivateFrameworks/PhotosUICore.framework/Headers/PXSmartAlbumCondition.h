// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSMARTALBUMCONDITION_H
#define PXSMARTALBUMCONDITION_H

@class NSArray, PLSingleQuery;
@protocol PXSmartAlbumConditionDelegate, PXSmartAlbumEditingContext;

#import <Foundation/Foundation.h>

#import "PXLabeledValue.h"

@interface PXSmartAlbumCondition : NSObject {
    NSArray *_comparatorValues;
}


@property (readonly, nonatomic) NSInteger comparatorParameterType;
@property (retain, nonatomic) PXLabeledValue *comparatorValue;
@property (readonly, nonatomic) NSArray *comparatorValues;
@property (readonly, nonatomic) NSInteger conditionType; // ivar: _conditionType
@property (weak, nonatomic) NSObject<PXSmartAlbumConditionDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) NSObject<PXSmartAlbumEditingContext> *editingContext; // ivar: _editingContext
@property (readonly, nonatomic) PLSingleQuery *singleQuery; // ivar: _singleQuery


+(id)_conditionWithSingleQuery:(id)arg0 editingContext:(id)arg1 ;
+(id)conditionWithConditionType:(NSInteger)arg0 editingContext:(id)arg1 ;
+(id)conditionsForQuery:(id)arg0 editingContext:(id)arg1 error:(*id)arg2 ;
+(id)defaultSingleQueryForEditingContext:(id)arg0 ;
-(NSInteger)comparatorMode;
-(id)_initWithConditionType:(NSInteger)arg0 singleQuery:(id)arg1 editingContext:(id)arg2 ;
-(id)init;
-(int)_comparatorType;


@end


#endif