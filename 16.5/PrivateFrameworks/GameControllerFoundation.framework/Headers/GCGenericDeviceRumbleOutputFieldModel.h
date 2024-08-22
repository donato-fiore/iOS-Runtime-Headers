// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GCGENERICDEVICERUMBLEOUTPUTFIELDMODEL_H
#define GCGENERICDEVICERUMBLEOUTPUTFIELDMODEL_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "GCGenericDeviceDataProcessorExpressionModel.h"

@interface GCGenericDeviceRumbleOutputFieldModel : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy) GCGenericDeviceDataProcessorExpressionModel *offsetExpression; // ivar: _offsetExpression
@property (readonly, copy) GCGenericDeviceDataProcessorExpressionModel *sizeExpression; // ivar: _sizeExpression
@property (readonly, copy) GCGenericDeviceDataProcessorExpressionModel *valueExpression; // ivar: _valueExpression


+(BOOL)supportsSecureCoding;
+(id)description;
+(id)modelWithDictionaryRepresentation:(id)arg0 error:(*id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif