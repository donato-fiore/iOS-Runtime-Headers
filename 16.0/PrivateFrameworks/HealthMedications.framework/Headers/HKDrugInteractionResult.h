// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKDRUGINTERACTIONRESULT_H
#define HKDRUGINTERACTIONRESULT_H

@class HKOntologyLocalizedEducationContent, HKConceptIdentifier, NSString, NSSet;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "HKDrugInteractionClass.h"
#import "HKDrugInteractionSeverity.h"

@interface HKDrugInteractionResult : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) HKOntologyLocalizedEducationContent *educationContent; // ivar: _educationContent
@property (readonly, nonatomic) HKDrugInteractionClass *firstInteractionClass; // ivar: _firstInteractionClass
@property (readonly, copy, nonatomic) HKConceptIdentifier *identifier; // ivar: _identifier
@property (readonly, nonatomic) HKDrugInteractionClass *secondInteractionClass; // ivar: _secondInteractionClass
@property (readonly, copy, nonatomic) HKDrugInteractionSeverity *severity; // ivar: _severity
@property (readonly, nonatomic) NSString *uniqueIdentifier;
@property (readonly, copy, nonatomic) NSSet *validRegionCodes; // ivar: _validRegionCodes


+(BOOL)supportsSecureCoding;
-(BOOL)hasSameAncestorIdentifiersAsInteractionResult:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFirstInteractionClass:(id)arg0 secondInteractionClass:(id)arg1 severity:(id)arg2 educationContent:(id)arg3 ontologyIdentifier:(id)arg4 validRegionCodes:(id)arg5 ;
-(id)interactionClasses;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif