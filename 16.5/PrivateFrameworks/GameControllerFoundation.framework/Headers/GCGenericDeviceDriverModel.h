// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GCGENERICDEVICEDRIVERMODEL_H
#define GCGENERICDEVICEDRIVERMODEL_H

@class NSSet;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "GCGenericDeviceInputEventDriverModel.h"
#import "GCGenericDeviceRumbleModel.h"

@interface GCGenericDeviceDriverModel : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy) NSSet *elements; // ivar: _elements
@property (readonly, copy) GCGenericDeviceInputEventDriverModel *input; // ivar: _input
@property (readonly, copy) GCGenericDeviceRumbleModel *rumble; // ivar: _rumble


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