// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKDRUGINTERACTIONCLASS_H
#define HKDRUGINTERACTIONCLASS_H

@class HKConceptIdentifier, NSString, NSSet;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HKDrugInteractionClass : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) HKConceptIdentifier *ancestorIdentifier; // ivar: _ancestorIdentifier
@property (readonly, copy, nonatomic) HKConceptIdentifier *identifier; // ivar: _identifier
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) NSUInteger relationshipCount; // ivar: _relationshipCount
@property (readonly, copy, nonatomic) NSString *uniqueIdentifier;
@property (readonly, copy, nonatomic) NSSet *validRegionCodes; // ivar: _validRegionCodes


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithName:(id)arg0 relationshipCount:(NSUInteger)arg1 ancestorIdentifier:(id)arg2 ontologyIdentifier:(id)arg3 validRegionCodes:(id)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif