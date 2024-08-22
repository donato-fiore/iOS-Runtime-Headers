// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKDISMISSEDDRUGINTERACTIONRESULT_H
#define HKDISMISSEDDRUGINTERACTIONRESULT_H

@class NSDate, HKConceptIdentifier;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HKDismissedDrugInteractionResult : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSDate *creationDate; // ivar: _creationDate
@property (readonly, nonatomic) HKConceptIdentifier *firstDrugClassAncestorIdentifier; // ivar: _firstDrugClassAncestorIdentifier
@property (readonly, nonatomic) HKConceptIdentifier *firstDrugClassIdentifier; // ivar: _firstDrugClassIdentifier
@property (readonly, nonatomic) HKConceptIdentifier *interactionIdentifier; // ivar: _interactionIdentifier
@property (readonly, nonatomic) HKConceptIdentifier *secondDrugClassAncestorIdentifier; // ivar: _secondDrugClassAncestorIdentifier
@property (readonly, nonatomic) HKConceptIdentifier *secondDrugClassIdentifier; // ivar: _secondDrugClassIdentifier


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToDrugInteractionResult:(id)arg0 ;
-(NSUInteger)hash;
-(id)_initWithDrugInteractionResult:(id)arg0 ;
-(id)_initWithInteractionIdentifier:(id)arg0 firstDrugClassIdentifier:(id)arg1 firstDrugClassAncestorIdentifier:(id)arg2 secondDrugClassIdentifier:(id)arg3 secondDrugClassAncestorIdentifier:(id)arg4 creationDate:(id)arg5 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif