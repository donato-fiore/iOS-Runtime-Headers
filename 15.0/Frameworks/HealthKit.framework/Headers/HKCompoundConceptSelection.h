// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKCOMPOUNDCONCEPTSELECTION_H
#define HKCOMPOUNDCONCEPTSELECTION_H

@class NSArray;


#import "HKConceptSelection.h"

@interface HKCompoundConceptSelection : HKConceptSelection

@property (readonly, nonatomic) NSUInteger operationType; // ivar: _operationType
@property (readonly, copy, nonatomic) NSArray *selections; // ivar: _selections


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSelections:(id)arg0 operationType:(NSUInteger)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif