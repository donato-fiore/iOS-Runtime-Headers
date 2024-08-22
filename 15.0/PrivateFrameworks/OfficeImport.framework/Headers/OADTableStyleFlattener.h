// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OADTABLESTYLEFLATTENER_H
#define OADTABLESTYLEFLATTENER_H



#import "OADTableStyleResolver.h"

@interface OADTableStyleFlattener : OADTableStyleResolver



-(void)applyCellPropertiesToTextBodyPropertiesInCell:(id)arg0 ;
-(void)applyResolvedPartStyle:(id)arg0 leftStroke:(id)arg1 rightStroke:(id)arg2 topStroke:(id)arg3 bottomStroke:(id)arg4 toCell:(id)arg5 ;
-(void)applyTextStyle:(id)arg0 toParagraph:(id)arg1 ;


@end


#endif