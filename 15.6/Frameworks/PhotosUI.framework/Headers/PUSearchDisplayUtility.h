// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUSEARCHDISPLAYUTILITY_H
#define PUSEARCHDISPLAYUTILITY_H


#import <Foundation/Foundation.h>


@interface PUSearchDisplayUtility : NSObject



+(BOOL)hasLimitedScreenSize;
+(BOOL)indexPathIsFirstRowInSection:(id)arg0 tableView:(id)arg1 ;
+(BOOL)indexPathIsLastRowInSection:(id)arg0 tableView:(id)arg1 ;
+(NSUInteger)cornerMaskForCell:(id)arg0 roundedCornerType:(NSInteger)arg1 ;
+(id)applyCornerMaskToCell:(id)arg0 roundedCornerType:(NSInteger)arg1 ;
+(id)feedbackTapToRadarViewControllerWithAttachmentURLs:(id)arg0 ;
+(id)genericCellFromCell:(id)arg0 roundedCornerType:(NSInteger)arg1 ;
+(id)genericSuggestionsCellFont;
+(id)genericSuggestionsTitleCellFont;


@end


#endif