// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDDRUGINTERACTIONCLASS_H
#define HDDRUGINTERACTIONCLASS_H

@class HKDrugInteractionClass, NSArray;



@interface HDDrugInteractionClass : HKDrugInteractionClass

@property (readonly, copy, nonatomic) NSArray *relationships; // ivar: _relationships


-(BOOL)isEqual:(id)arg0 ;
-(Class)classForCoder;
-(Class)classForKeyedArchiver;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithName:(id)arg0 relationships:(id)arg1 ancestorIdentifier:(id)arg2 ontologyIdentifier:(id)arg3 validRegionCodes:(id)arg4 ;


@end


#endif