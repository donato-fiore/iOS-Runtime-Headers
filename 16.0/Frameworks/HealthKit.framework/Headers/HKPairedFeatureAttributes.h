// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKPAIREDFEATUREATTRIBUTES_H
#define HKPAIREDFEATUREATTRIBUTES_H

@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "HKFeatureAttributes.h"

@interface HKPairedFeatureAttributes : NSObject <NSSecureCoding, NSCopying>



@property (readonly, copy, nonatomic) HKFeatureAttributes *companionAttributes;
@property (readonly, copy, nonatomic) HKFeatureAttributes *localAttributes; // ivar: _localAttributes
@property (readonly, copy, nonatomic) HKFeatureAttributes *pairedAttributes; // ivar: _pairedAttributes
@property (readonly, copy, nonatomic) HKFeatureAttributes *watchAttributes;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLocalAttributes:(id)arg0 pairedAttributes:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif