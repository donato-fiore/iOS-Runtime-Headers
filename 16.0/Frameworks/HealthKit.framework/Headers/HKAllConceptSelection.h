// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKALLCONCEPTSELECTION_H
#define HKALLCONCEPTSELECTION_H



#import "HKConceptSelection.h"

@interface HKAllConceptSelection : HKConceptSelection

@property (readonly, nonatomic) BOOL value; // ivar: _value


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithValue:(BOOL)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif