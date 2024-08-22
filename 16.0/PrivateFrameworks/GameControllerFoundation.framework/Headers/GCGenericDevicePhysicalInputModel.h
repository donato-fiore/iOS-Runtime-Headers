// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GCGENERICDEVICEPHYSICALINPUTMODEL_H
#define GCGENERICDEVICEPHYSICALINPUTMODEL_H

@class NSSet;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface GCGenericDevicePhysicalInputModel : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy) NSSet *elements; // ivar: _elements


+(BOOL)supportsSecureCoding;
+(id)description;
+(id)modelWithDictionaryRepresentation:(id)arg0 error:(*id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)redactedDescription;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif