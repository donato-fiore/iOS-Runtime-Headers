// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SUSHORTLINKCELLCONFIGURATION_H
#define SUSHORTLINKCELLCONFIGURATION_H



#import "SUMediaItemCellConfiguration.h"

@interface SUShortLinkCellConfiguration : SUMediaItemCellConfiguration



+(CGFloat)rowHeightForContext:(id)arg0 representedObject:(id)arg1 ;
+(id)copyDefaultContext;
-(BOOL)showContentRating;
-(id)colorForLabelAtIndex:(NSUInteger)arg0 withModifiers:(NSUInteger)arg1 ;
-(id)copyImageDataProvider;
-(id)fontForLabelAtIndex:(NSUInteger)arg0 ;
-(id)init;
-(void)reloadLayoutInformation;
-(void)reloadStrings;


@end


#endif