// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKMEDICATIONINTERACTIONRESULT_H
#define HKMEDICATIONINTERACTIONRESULT_H

@class HKConceptIdentifier, NSSet;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HKMedicationInteractionResult : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) HKConceptIdentifier *firstIdentifier; // ivar: _firstIdentifier
@property (readonly, nonatomic) NSUInteger interactionType; // ivar: _interactionType
@property (readonly, copy, nonatomic) NSSet *interactions; // ivar: _interactions
@property (readonly, copy, nonatomic) HKConceptIdentifier *secondIdentifier; // ivar: _secondIdentifier


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)conceptIdentifiers;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFirstConceptIdentifier:(id)arg0 secondConceptIdentifier:(id)arg1 interactionType:(NSUInteger)arg2 interactions:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif