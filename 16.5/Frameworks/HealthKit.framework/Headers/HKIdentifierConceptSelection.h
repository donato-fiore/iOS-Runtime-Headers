// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKIDENTIFIERCONCEPTSELECTION_H
#define HKIDENTIFIERCONCEPTSELECTION_H



#import "HKConceptSelection.h"
#import "HKConceptIdentifier.h"

@interface HKIdentifierConceptSelection : HKConceptSelection

@property (readonly, copy, nonatomic) HKConceptIdentifier *identifier; // ivar: _identifier


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif