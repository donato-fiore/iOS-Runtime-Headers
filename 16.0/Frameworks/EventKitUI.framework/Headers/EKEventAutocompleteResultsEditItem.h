// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EKEVENTAUTOCOMPLETERESULTSEDITITEM_H
#define EKEVENTAUTOCOMPLETERESULTSEDITITEM_H

@class NSArray;
@protocol EKEventAutocompleteResultsEditItemDelegate;


#import "EKCalendarItemEditItem.h"

@interface EKEventAutocompleteResultsEditItem : EKCalendarItemEditItem {
    BOOL _suggestionApplied;
}


@property (weak, nonatomic) NSObject<EKEventAutocompleteResultsEditItemDelegate> *delegate;
@property (readonly, nonatomic) BOOL hasSuggestedLocationResult;
@property (retain, nonatomic) NSArray *results; // ivar: _results


-(BOOL)editor:(id)arg0 canSelectSubitem:(NSUInteger)arg1 ;
-(BOOL)editor:(id)arg0 shouldClearSelectionFromSubitem:(NSUInteger)arg1 ;
-(BOOL)shouldAppearWithVisibility:(int)arg0 ;
-(CGFloat)defaultCellHeightForSubitemAtIndex:(NSUInteger)arg0 forWidth:(CGFloat)arg1 ;
-(NSUInteger)numberOfSubitems;
-(id)cellForSubitemAtIndex:(NSUInteger)arg0 ;
-(void)editor:(id)arg0 didSelectSubitem:(NSUInteger)arg1 ;


@end


#endif