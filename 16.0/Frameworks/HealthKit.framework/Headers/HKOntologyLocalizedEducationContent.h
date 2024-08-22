// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKONTOLOGYLOCALIZEDEDUCATIONCONTENT_H
#define HKONTOLOGYLOCALIZEDEDUCATIONCONTENT_H

@class NSArray;
@protocol NSFastEnumeration;


#import "HKUserDomainConceptProperty.h"
#import "HKOntologyLocalizedEducationContentSection.h"

@interface HKOntologyLocalizedEducationContent : HKUserDomainConceptProperty <NSFastEnumeration>



@property (readonly, nonatomic) NSInteger count;
@property (readonly, copy, nonatomic) HKOntologyLocalizedEducationContentSection *primarySection;
@property (readonly, copy, nonatomic) NSArray *sections; // ivar: _sections


+(BOOL)supportsSecureCoding;
+(id)_mergeDataFromSectionsInto:(id)arg0 fromContent:(id)arg1 options:(NSUInteger)arg2 ;
+(id)mergeListsOfPropertiesWithType:(NSInteger)arg0 intoListOfProperties:(id)arg1 fromListOfProperties:(id)arg2 options:(NSUInteger)arg3 ;
+(id)nullPropertyWithVersion:(NSInteger)arg0 ;
+(id)nullPropertyWithVersion:(NSInteger)arg0 timestamp:(CGFloat)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(NSUInteger)hash;
-(id)allSectionsWithType:(NSInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)firstSectionWithType:(NSInteger)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSections:(id)arg0 version:(NSInteger)arg1 timestamp:(CGFloat)arg2 deleted:(BOOL)arg3 ;
-(id)initWithType:(NSInteger)arg0 version:(NSInteger)arg1 timestamp:(CGFloat)arg2 deleted:(BOOL)arg3 ;
-(id)valueDescription;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif