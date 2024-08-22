// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SUREVIEWCELLCONFIGURATION_H
#define SUREVIEWCELLCONFIGURATION_H



#import "SUItemCellConfiguration.h"

@interface SUReviewCellConfiguration : SUItemCellConfiguration



+(CGFloat)rowHeightForContext:(id)arg0 representedObject:(id)arg1 ;
-(BOOL)getShadowColor:(*id)arg0 offset:(struct CGSize *)arg1 forLabelAtIndex:(NSUInteger)arg2 withModifiers:(NSUInteger)arg3 ;
-(id)colorForLabelAtIndex:(NSUInteger)arg0 withModifiers:(NSUInteger)arg1 ;
-(id)fontForLabelAtIndex:(NSUInteger)arg0 ;
-(id)init;
-(void)reloadImages;
-(void)reloadLayoutInformation;
-(void)reloadStrings;


@end


#endif