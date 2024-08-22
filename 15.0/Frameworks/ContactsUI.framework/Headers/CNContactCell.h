// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNCONTACTCELL_H
#define CNCONTACTCELL_H

@class UITableViewCell, NSArray;
@protocol CNIndentableCell;


#import "CNCardGroupItem.h"

@interface CNContactCell : UITableViewCell <CNIndentableCell>

 {
    NSArray *_constantConstraints;
    NSArray *_variableConstraints;
}


@property (retain, nonatomic) CNCardGroupItem *cardGroupItem; // ivar: _cardGroupItem
@property (readonly, nonatomic) NSArray *constantConstraints;
@property (readonly, nonatomic) BOOL hasGapBetweenSeparatorAndTrailingEdge;
@property (readonly, nonatomic) CGFloat minCellHeight;
@property (nonatomic) BOOL showSeparator;
@property (readonly, nonatomic) NSArray *variableConstraints;


+(BOOL)shouldIndentWhileEditing;
-(BOOL)shouldPerformAccessoryAction;
-(BOOL)shouldPerformDefaultAction;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)_setAnimating:(BOOL)arg0 clippingAdjacentCells:(BOOL)arg1 ;
-(void)contentSizeCategoryDidChange:(id)arg0 ;
-(void)dealloc;
-(void)performAccessoryAction;
-(void)performDefaultAction;
-(void)prepareForReuse;
-(void)updateConstraints;


@end


#endif