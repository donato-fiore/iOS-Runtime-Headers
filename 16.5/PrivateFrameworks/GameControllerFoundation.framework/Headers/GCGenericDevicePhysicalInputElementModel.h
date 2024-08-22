// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GCGENERICDEVICEPHYSICALINPUTELEMENTMODEL_H
#define GCGENERICDEVICEPHYSICALINPUTELEMENTMODEL_H

@class NSNumber, NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface GCGenericDevicePhysicalInputElementModel : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, getter=isAnalog) NSNumber *analog; // ivar: _analog
@property (readonly, copy) NSString *identifier; // ivar: _identifier
@property (readonly, copy) NSString *localizedNameKey; // ivar: _localizedNameKey
@property (readonly, copy) NSString *name; // ivar: _name
@property (readonly, copy) NSString *symbolName; // ivar: _symbolName


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