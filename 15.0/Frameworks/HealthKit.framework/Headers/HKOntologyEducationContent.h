// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKONTOLOGYEDUCATIONCONTENT_H
#define HKONTOLOGYEDUCATIONCONTENT_H

@class NSArray;
@protocol NSCopying, NSSecureCoding, NSFastEnumeration;

#import <Foundation/Foundation.h>

#import "HKOntologyEducationContentSection.h"

@interface HKOntologyEducationContent : NSObject <NSCopying, NSSecureCoding, NSFastEnumeration>



@property (readonly, nonatomic) NSInteger count;
@property (readonly, copy, nonatomic) HKOntologyEducationContentSection *primarySection;
@property (readonly, copy, nonatomic) NSArray *sections; // ivar: _sections


+(BOOL)supportsSecureCoding;
+(id)educationContentWithPropertyCollection:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(NSUInteger)hash;
-(id)allSectionsAsProperties;
-(id)allSectionsWithType:(NSInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)firstSectionWithType:(NSInteger)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSections:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif