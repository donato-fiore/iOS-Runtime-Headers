// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICAUTHORHIGHLIGHTSUPDATER_H
#define ICAUTHORHIGHLIGHTSUPDATER_H

@class ICAuthorHighlightsController, TTTextEditFilter;

#import <Foundation/Foundation.h>


@interface ICAuthorHighlightsUpdater : NSObject {
    ? focusedRange;
    ? states;
    ? $__lazy_storage_$_grouper;
    ? updateTimer;
    ? animatesScheduledUpdate;
}


@property (nonatomic, readonly) ICAuthorHighlightsController *authorHighlightsController; // ivar: authorHighlightsController
@property (nonatomic, retain) TTTextEditFilter *filter; // ivar: filter
@property (nonatomic) CGFloat highlightedValue; // ivar: highlightedValue
@property (nonatomic) BOOL updatesVisibleRangesOnly; // ivar: updatesVisibleRangesOnly


-(id)init;
-(id)initWithAuthorHighlightsController:(id)arg0 ;
-(void)flashHighlightsForFilter:(id)arg0 ;
-(void)flashHighlightsForRanges:(id)arg0 inTextStorage:(id)arg1 ;
-(void)scheduleUpdateAnimated:(BOOL)arg0 ;
-(void)updateAnimated:(BOOL)arg0 ;


@end


#endif