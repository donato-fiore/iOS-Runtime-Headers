// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GCGENERICDEVICEDATACLAMPEXPRESSIONMODEL_H
#define GCGENERICDEVICEDATACLAMPEXPRESSIONMODEL_H



#import "GCGenericDeviceDataProcessorExpressionModel.h"

@interface GCGenericDeviceDataClampExpressionModel : GCGenericDeviceDataProcessorExpressionModel

@property (readonly) GCGenericDeviceDataProcessorExpressionModel *inputExpression; // ivar: _inputExpression
@property (readonly) GCGenericDeviceDataProcessorExpressionModel *maxExpression; // ivar: _maxExpression
@property (readonly) GCGenericDeviceDataProcessorExpressionModel *minExpression; // ivar: _minExpression


+(BOOL)supportsSecureCoding;
+(id)description;
-(BOOL)isEqual:(id)arg0 ;
-(id)_buildPullExpressionWithOverrideBuilder:(SEL)arg0 error:(id)arg1 ;
-(id)debugDescription;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)redactedDescription;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif