// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MSTRACKLISTCELLCONFIGURATION_H
#define MSTRACKLISTCELLCONFIGURATION_H

@class SUMediaItemCellConfiguration;



@interface MSTrackListCellConfiguration : SUMediaItemCellConfiguration

@property (nonatomic) ? position; // ivar: _position


+(CGFloat)rowHeightForContext:(id)arg0 representedObject:(id)arg1 ;
+(id)copyDefaultContext;
-(BOOL)showContentRating;
-(NSUInteger)indexOfLabelForPurchaseAnimation;
-(id)colorForLabelAtIndex:(NSUInteger)arg0 withModifiers:(NSUInteger)arg1 ;
-(id)fontForLabelAtIndex:(NSUInteger)arg0 ;
-(id)init;
-(void)drawBackgroundWithModifiers:(NSUInteger)arg0 ;
-(void)reloadImages;
-(void)reloadLayoutInformation;
-(void)reloadStrings;


@end


#endif