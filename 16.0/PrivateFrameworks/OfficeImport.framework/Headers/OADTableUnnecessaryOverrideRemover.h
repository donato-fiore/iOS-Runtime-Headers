// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OADTABLEUNNECESSARYOVERRIDEREMOVER_H
#define OADTABLEUNNECESSARYOVERRIDEREMOVER_H



#import "OADTableStyleResolver.h"
#import "OADTextListStyle.h"

@interface OADTableUnnecessaryOverrideRemover : OADTableStyleResolver

@property (readonly, nonatomic) OADTextListStyle *parentTextListStyle; // ivar: _parentTextListStyle


-(id)initWithTable:(id)arg0 parentTextListStyle:(id)arg1 ;
-(void)applyResolvedPartStyle:(id)arg0 leftStroke:(id)arg1 rightStroke:(id)arg2 topStroke:(id)arg3 bottomStroke:(id)arg4 toCell:(id)arg5 ;
-(void)applyTextBodyPropertiesToCellPropertiesInCell:(id)arg0 ;
-(void)applyTextStyle:(id)arg0 toParagraph:(id)arg1 ;
-(void)fixFill:(id)arg0 ;
-(void)removeUnnecessaryOverridesInCellProperties:(id)arg0 strokeType:(int)arg1 resolvedStroke:(id)arg2 ;


@end


#endif