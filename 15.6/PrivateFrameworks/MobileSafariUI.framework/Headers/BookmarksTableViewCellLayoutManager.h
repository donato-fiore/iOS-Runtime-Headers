// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BOOKMARKSTABLEVIEWCELLLAYOUTMANAGER_H
#define BOOKMARKSTABLEVIEWCELLLAYOUTMANAGER_H

@class UITableViewCellLayoutManager, NSString;



@interface BookmarksTableViewCellLayoutManager : UITableViewCellLayoutManager

@property (retain, nonatomic) NSString *currentContentSizeCategory; // ivar: _currentContentSizeCategory


+(id)sharedManager;
-(NSInteger)_numberOfLinesForCurrentContentSize;
-(struct CGRect )accessoryEndingRectForCell:(id)arg0 forNewEditingState:(BOOL)arg1 showingDeleteConfirmation:(BOOL)arg2 ;
-(struct CGRect )accessoryStartingRectForCell:(id)arg0 forNewEditingState:(BOOL)arg1 showingDeleteConfirmation:(BOOL)arg2 ;
-(struct CGRect )textRectForCell:(id)arg0 rowWidth:(CGFloat)arg1 forSizing:(BOOL)arg2 ;
-(void)layoutSubviewsOfCell:(id)arg0 ;


@end


#endif