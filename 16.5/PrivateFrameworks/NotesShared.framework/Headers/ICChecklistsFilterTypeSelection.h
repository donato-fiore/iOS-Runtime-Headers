// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICCHECKLISTSFILTERTYPESELECTION_H
#define ICCHECKLISTSFILTERTYPESELECTION_H

@protocol NSCopying;


#import "ICFilterTypeSelection.h"

@interface ICChecklistsFilterTypeSelection : ICFilterTypeSelection <NSCopying>



@property (readonly, nonatomic) NSUInteger selectionType; // ivar: _selectionType


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToICChecklistsFilterTypeSelection:(id)arg0 ;
-(NSInteger)filterType;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)filterName;
-(id)initWithSelectionType:(NSUInteger)arg0 ;
-(id)rawFilterValue;


@end


#endif