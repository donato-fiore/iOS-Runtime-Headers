// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MSTRACKLISTLOADMORECELLCONFIGURATION_H
#define MSTRACKLISTLOADMORECELLCONFIGURATION_H

@class SULoadMoreMediaCellConfiguration;



@interface MSTrackListLoadMoreCellConfiguration : SULoadMoreMediaCellConfiguration



+(CGFloat)rowHeightForContext:(id)arg0 representedObject:(id)arg1 ;
-(NSInteger)textAlignmentForLabelAtIndex:(NSUInteger)arg0 ;
-(id)colorForLabelAtIndex:(NSUInteger)arg0 withModifiers:(NSUInteger)arg1 ;
-(id)fontForLabelAtIndex:(NSUInteger)arg0 ;
-(void)reloadLayoutInformation;


@end


#endif