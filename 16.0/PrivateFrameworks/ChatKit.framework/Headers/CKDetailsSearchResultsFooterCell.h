// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKDETAILSSEARCHRESULTSFOOTERCELL_H
#define CKDETAILSSEARCHRESULTSFOOTERCELL_H

@class UICollectionViewCell, CALayer, NSString, UITableView;
@protocol UITableViewDelegate, UITableViewDataSource, CKSearchResultSupplementryCell, CKDetailsSearchResultsFooterCellDelegate;



@interface CKDetailsSearchResultsFooterCell : UICollectionViewCell <UITableViewDelegate, UITableViewDataSource, CKSearchResultSupplementryCell>



@property (retain, nonatomic) CALayer *bottomHairline; // ivar: _bottomHairline
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CKDetailsSearchResultsFooterCellDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) UIEdgeInsets marginInsets; // ivar: marginInsets
@property (copy, nonatomic) NSString *sectionIdentifier; // ivar: _sectionIdentifier
@property (nonatomic) NSUInteger sectionIndex; // ivar: _sectionIndex
@property (readonly) Class superclass;
@property (retain, nonatomic) UITableView *tableView; // ivar: _tableView
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (retain, nonatomic) CALayer *topHairline; // ivar: _topHairline


+(CGFloat)desiredZPosition;
+(id)reuseIdentifier;
+(id)supplementaryViewType;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)preferredLayoutAttributesFittingAttributes:(id)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)layoutSubviews;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;


@end


#endif