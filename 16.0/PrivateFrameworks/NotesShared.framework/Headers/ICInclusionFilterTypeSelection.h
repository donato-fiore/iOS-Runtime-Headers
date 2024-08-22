// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICINCLUSIONFILTERTYPESELECTION_H
#define ICINCLUSIONFILTERTYPESELECTION_H

@protocol NSCopying;


#import "ICFilterTypeSelection.h"

@interface ICInclusionFilterTypeSelection : ICFilterTypeSelection <NSCopying>



@property (readonly, nonatomic) NSUInteger inclusionType; // ivar: _inclusionType


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToInclusionFilterSelection:(id)arg0 ;
-(NSUInteger)filterType;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)initWithInclusionType:(NSUInteger)arg0 ;
-(id)rawFilterValue;


@end


#endif