// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKREFERENCERANGE_H
#define HKREFERENCERANGE_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "HKInspectableValueCollection.h"

@interface HKReferenceRange : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSString *referenceRangeIdentifier; // ivar: _referenceRangeIdentifier
@property (readonly, nonatomic) HKInspectableValueCollection *valueRange; // ivar: _valueRange


+(BOOL)supportsSecureCoding;
+(id)referenceRangeWithIdentifier:(id)arg0 inspectableValueRange:(id)arg1 ;
+(id)referenceRangeWithIdentifier:(id)arg0 maxValue:(id)arg1 ;
+(id)referenceRangeWithIdentifier:(id)arg0 minValue:(id)arg1 ;
+(id)referenceRangeWithIdentifier:(id)arg0 minValue:(id)arg1 maxValue:(id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif