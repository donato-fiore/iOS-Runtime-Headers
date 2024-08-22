// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKWALLETITEMLINKSEARCHRESULTCELL_H
#define CKWALLETITEMLINKSEARCHRESULTCELL_H

@class NSString, LPWebLinkPresentationProperties, LPLinkView;
@protocol CKSearchResultCell;


#import "CKEditableSearchResultCell.h"

@interface CKWalletItemLinkSearchResultCell : CKEditableSearchResultCell <CKSearchResultCell>



@property (nonatomic, getter=_ck_isEditing, setter=_ck_setEditing:) BOOL _ck_editing;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) LPWebLinkPresentationProperties *linkMetadata; // ivar: _linkMetadata
@property (retain, nonatomic) LPLinkView *linkView; // ivar: _linkView
@property (nonatomic) UIEdgeInsets marginInsets; // ivar: marginInsets
@property (copy, nonatomic) NSString *resultIdentifier; // ivar: _resultIdentifier
@property (readonly) Class superclass;


+(id)reuseIdentifier;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)previewSnapshot;
-(void)_metadataGenerated:(id)arg0 ;
-(void)configureWithQueryResult:(id)arg0 searchText:(id)arg1 mode:(NSUInteger)arg2 ;
-(void)didMoveToWindow;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)refreshForSearchTextIfNeeded:(id)arg0 ;
-(void)setLinkPresentationProperties:(id)arg0 forSearchResult:(id)arg1 ;


@end


#endif