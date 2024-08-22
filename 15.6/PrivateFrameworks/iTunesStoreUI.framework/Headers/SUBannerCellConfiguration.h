// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SUBANNERCELLCONFIGURATION_H
#define SUBANNERCELLCONFIGURATION_H



#import "SUItemCellConfiguration.h"

@interface SUBannerCellConfiguration : SUItemCellConfiguration



+(CGFloat)minimumRowHeight;
+(CGFloat)rowHeightForContext:(id)arg0 representedObject:(id)arg1 ;
+(id)copyDefaultContext;
-(id)copyImageDataProvider;
-(id)init;
-(struct CGSize )_imageSizeForLayoutSize:(struct CGSize )arg0 ;
-(void)reloadAfterArtworkLoad;
-(void)reloadData;
-(void)reloadImages;
-(void)reloadLayoutInformation;
-(void)reloadStrings;


@end


#endif