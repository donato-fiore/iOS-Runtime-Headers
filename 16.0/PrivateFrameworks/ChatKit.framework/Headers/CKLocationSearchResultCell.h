// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKLOCATIONSEARCHRESULTCELL_H
#define CKLOCATIONSEARCHRESULTCELL_H

@class UIVisualEffectView, NSString, UILabel;
@protocol CKSearchResultCell;


#import "CKEditableSearchResultCell.h"
#import "CKSpotlightQueryResult.h"

@interface CKLocationSearchResultCell : CKEditableSearchResultCell <CKSearchResultCell>



@property (nonatomic, getter=_ck_isEditing, setter=_ck_setEditing:) BOOL _ck_editing;
@property (retain, nonatomic) UIVisualEffectView *blurEffectView; // ivar: _blurEffectView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) UIEdgeInsets marginInsets; // ivar: marginInsets
@property (nonatomic) NSUInteger mode; // ivar: _mode
@property (retain, nonatomic) UILabel *placeLabel; // ivar: _placeLabel
@property (retain, nonatomic) CKSpotlightQueryResult *result; // ivar: _result
@property (readonly, copy, nonatomic) NSString *resultIdentifier;
@property (retain, nonatomic) NSString *searchText; // ivar: _searchText
@property (readonly) Class superclass;


+(id)reuseIdentifier;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_configurePlaceLabelWithResult:(id)arg0 searchText:(id)arg1 ;
-(void)_thumbnailGenerated:(id)arg0 ;
-(void)configureWithQueryResult:(id)arg0 searchText:(id)arg1 mode:(NSUInteger)arg2 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)refreshForSearchTextIfNeeded:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif