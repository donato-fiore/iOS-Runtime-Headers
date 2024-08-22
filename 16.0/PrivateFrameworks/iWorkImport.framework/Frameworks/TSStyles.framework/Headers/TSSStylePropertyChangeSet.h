// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSSSTYLEPROPERTYCHANGESET_H
#define TSSSTYLEPROPERTYCHANGESET_H

@class TSKSosBase;



@interface TSSStylePropertyChangeSet : TSKSosBase



-(BOOL)isEmptyChangeSet;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToChangeSet:(id)arg0 ;
-(NSUInteger)hash;
-(id)changedPropertyPaths;
-(id)collectUndoForStyle:(id)arg0 ;
-(id)collectUnset;
-(id)description;
-(id)p_variationPropertyMapFromStyle:(id)arg0 withPropertyMap:(id)arg1 ;
-(id)propertyChangeFilteredByProperties:(id)arg0 ;
-(id)variationPropertyMapFromParentStyle:(id)arg0 ;
-(id)variationPropertyMapFromStyle:(id)arg0 ;
-(id)variationStyleFrom:(id)arg0 inStylesheet:(id)arg1 ;
-(void)enumerateDefinedPropertiesWithBlock:(id)arg0 ;
-(void)setBoxedValue:(id)arg0 forProperty:(int)arg1 ;
-(void)setSpec:(id)arg0 forProperty:(int)arg1 ;
-(void)setUnsetSpecForProperty:(int)arg0 ;


@end


#endif