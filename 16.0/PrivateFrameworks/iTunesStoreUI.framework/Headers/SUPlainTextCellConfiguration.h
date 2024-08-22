// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SUPLAINTEXTCELLCONFIGURATION_H
#define SUPLAINTEXTCELLCONFIGURATION_H



#import "SUItemCellConfiguration.h"

@interface SUPlainTextCellConfiguration : SUItemCellConfiguration



+(CGFloat)rowHeightForContext:(id)arg0 representedObject:(id)arg1 ;
-(BOOL)getShadowColor:(*id)arg0 offset:(struct CGSize *)arg1 forLabelAtIndex:(NSUInteger)arg2 withModifiers:(NSUInteger)arg3 ;
-(NSInteger)textAlignmentForLabelAtIndex:(NSUInteger)arg0 ;
-(id)colorForLabelAtIndex:(NSUInteger)arg0 withModifiers:(NSUInteger)arg1 ;
-(id)fontForLabelAtIndex:(NSUInteger)arg0 ;
-(id)init;
-(void)reloadImages;
-(void)reloadLayoutInformation;
-(void)reloadStrings;


@end


#endif