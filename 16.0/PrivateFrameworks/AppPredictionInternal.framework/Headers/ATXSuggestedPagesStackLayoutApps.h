// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXSUGGESTEDPAGESSTACKLAYOUTAPPS_H
#define ATXSUGGESTEDPAGESSTACKLAYOUTAPPS_H

@protocol ATXSuggestedPagesStackLayout;

#import <Foundation/Foundation.h>


@interface ATXSuggestedPagesStackLayoutApps : NSObject <ATXSuggestedPagesStackLayout>





-(NSUInteger)maxAllowableStacksForPageType:(NSInteger)arg0 ;
-(NSUInteger)maxAppRowsForPageType:(NSInteger)arg0 ;
-(NSUInteger)minNecessaryLeafIconsForPageType:(NSInteger)arg0 ;
-(id)makeStacksFromWidgets:(id)arg0 pageType:(NSInteger)arg1 environment:(id)arg2 ;
-(void)layOutStacks:(id)arg0 numberOfColumns:(NSUInteger)arg1 forPageType:(NSInteger)arg2 ;


@end


#endif