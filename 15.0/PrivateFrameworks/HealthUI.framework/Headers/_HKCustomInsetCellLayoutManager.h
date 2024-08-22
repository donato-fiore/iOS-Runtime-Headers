// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _HKCUSTOMINSETCELLLAYOUTMANAGER_H
#define _HKCUSTOMINSETCELLLAYOUTMANAGER_H

@class UITableViewCellLayoutManager;



@interface _HKCustomInsetCellLayoutManager : UITableViewCellLayoutManager

@property (nonatomic) CGFloat textLabelLeftInset; // ivar: _textLabelLeftInset
@property (nonatomic) CGFloat topInset; // ivar: _topInset


+(BOOL)requiresLegacyLayout;
-(struct CGRect )accessoryEndingRectForCell:(id)arg0 forNewEditingState:(BOOL)arg1 showingDeleteConfirmation:(BOOL)arg2 ;
-(struct CGRect )accessoryStartingRectForCell:(id)arg0 forNewEditingState:(BOOL)arg1 showingDeleteConfirmation:(BOOL)arg2 ;
-(struct CGRect )contentEndingRectForCell:(id)arg0 forDisplayOfDeleteConfirmation:(BOOL)arg1 ;
-(struct CGRect )contentEndingRectForCell:(id)arg0 forNewEditingState:(BOOL)arg1 ;
-(struct CGRect )contentRectForCell:(id)arg0 forState:(NSUInteger)arg1 ;
-(struct CGRect )contentStartingRectForCell:(id)arg0 forDisplayOfDeleteConfirmation:(BOOL)arg1 ;
-(struct CGRect )contentStartingRectForCell:(id)arg0 forNewEditingState:(BOOL)arg1 ;
-(struct CGRect )editControlEndingRectForCell:(id)arg0 forNewEditingState:(BOOL)arg1 ;
-(struct CGRect )editControlStartingRectForCell:(id)arg0 forNewEditingState:(BOOL)arg1 ;
-(struct CGRect )editingAccessoryEndingRectForCell:(id)arg0 forNewEditingState:(BOOL)arg1 showingDeleteConfirmation:(BOOL)arg2 ;
-(struct CGRect )editingAccessoryStartingRectForCell:(id)arg0 forNewEditingState:(BOOL)arg1 showingDeleteConfirmation:(BOOL)arg2 ;
-(struct CGRect )textRectForCell:(id)arg0 rowWidth:(CGFloat)arg1 forSizing:(BOOL)arg2 ;


@end


#endif