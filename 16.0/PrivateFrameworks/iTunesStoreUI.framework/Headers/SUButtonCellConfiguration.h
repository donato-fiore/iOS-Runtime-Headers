// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SUBUTTONCELLCONFIGURATION_H
#define SUBUTTONCELLCONFIGURATION_H



#import "SUItemCellConfiguration.h"

@interface SUButtonCellConfiguration : SUItemCellConfiguration



+(CGFloat)rowHeightForContext:(id)arg0 representedObject:(id)arg1 ;
-(id)colorForLabelAtIndex:(NSUInteger)arg0 withModifiers:(NSUInteger)arg1 ;
-(id)fontForLabelAtIndex:(NSUInteger)arg0 ;
-(id)init;
-(void)reloadLayoutInformation;
-(void)reloadStrings;


@end


#endif