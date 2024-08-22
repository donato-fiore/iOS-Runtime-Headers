// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GCGENERICDEVICEINPUTGAMEPADEVENTFIELDMODEL_H
#define GCGENERICDEVICEINPUTGAMEPADEVENTFIELDMODEL_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "GCGenericDeviceDataProcessorExpressionModel.h"

@interface GCGenericDeviceInputGamepadEventFieldModel : NSObject <NSCopying, NSSecureCoding>



@property (readonly) NSInteger extendedIndex; // ivar: _extendedIndex
@property (readonly, copy) GCGenericDeviceDataProcessorExpressionModel *sourceExpression; // ivar: _sourceExpression


+(BOOL)supportsSecureCoding;
+(id)description;
+(id)modelWithDictionaryRepresentation:(id)arg0 error:(*id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)redactedDescription;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif