// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GCGENERICDEVICEDATAADDEXPRESSIONMODEL_H
#define GCGENERICDEVICEDATAADDEXPRESSIONMODEL_H



#import "GCGenericDeviceDataProcessorExpressionModel.h"

@interface GCGenericDeviceDataAddExpressionModel : GCGenericDeviceDataProcessorExpressionModel

@property (readonly) GCGenericDeviceDataProcessorExpressionModel *leftExpression; // ivar: _leftExpression
@property (readonly) GCGenericDeviceDataProcessorExpressionModel *rightExpression; // ivar: _rightExpression


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