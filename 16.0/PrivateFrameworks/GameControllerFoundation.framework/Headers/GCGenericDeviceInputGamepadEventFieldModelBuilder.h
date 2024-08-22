// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GCGENERICDEVICEINPUTGAMEPADEVENTFIELDMODELBUILDER_H
#define GCGENERICDEVICEINPUTGAMEPADEVENTFIELDMODELBUILDER_H


#import <Foundation/Foundation.h>

#import "GCGenericDeviceDataProcessorExpressionModel.h"

@interface GCGenericDeviceInputGamepadEventFieldModelBuilder : NSObject

@property (nonatomic) NSInteger extendedIndex; // ivar: _extendedIndex
@property (copy, nonatomic) GCGenericDeviceDataProcessorExpressionModel *sourceExpression; // ivar: _sourceExpression


+(Class)modelClass;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)build;
-(id)init;
-(void)initializeWithModel:(id)arg0 ;
-(void)reset;


@end


#endif