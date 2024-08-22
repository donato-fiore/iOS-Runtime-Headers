// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SEARCHUI_H
#define SEARCHUI_H


#import <Foundation/Foundation.h>


@interface SearchUI : NSObject



+(BOOL)updateCardSectionView:(id)arg0 withCardSection:(id)arg1 ;
+(CGFloat)idealPlatterWidth;
+(CGFloat)idealPlatterWidthForOrientation:(NSInteger)arg0 ;
+(id)cardViewControllerForCard:(id)arg0 feedbackDelegate:(id)arg1 ;
+(id)cardViewControllerForCard:(id)arg0 style:(NSUInteger)arg1 feedbackDelegate:(id)arg2 ;
+(id)reuseIdentifierForCardSection:(id)arg0 ;
+(id)rowViewForResult:(id)arg0 style:(NSUInteger)arg1 feedbackDelegate:(id)arg2 ;
+(id)rowViewsForResults:(id)arg0 feedbackDelegate:(id)arg1 ;
+(id)rowViewsForResults:(id)arg0 style:(NSUInteger)arg1 feedbackDelegate:(id)arg2 ;
+(id)viewForCardSection:(id)arg0 style:(NSUInteger)arg1 feedbackListener:(id)arg2 ;
+(id)viewsForCardSections:(id)arg0 feedbackListener:(id)arg1 ;
+(id)viewsForCardSections:(id)arg0 style:(NSUInteger)arg1 feedbackListener:(id)arg2 ;


@end


#endif