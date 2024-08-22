// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPASSTILEGROUPVIEW_H
#define PKPASSTILEGROUPVIEW_H

@class UIView, NSArray, NSMutableArray, PKPass;
@protocol PKPassTileGroupViewDelegate;



@interface PKPassTileGroupView : UIView {
    CGSize _boundsSize;
    BOOL _selectable;
    NSArray *_contentByRows;
    BOOL _effectiveSelectable;
    NSArray *_effectiveContentByRows;
    NSMutableArray *_itemViewsByRows;
    BOOL _animated;
    BOOL _deferringUpdate;
    BOOL _deferredSubviewUpdate;
}


@property (readonly, copy, nonatomic) NSArray *content; // ivar: _content
@property (nonatomic) UIEdgeInsets contentInset; // ivar: _contentInset
@property (weak, nonatomic) NSObject<PKPassTileGroupViewDelegate> *delegate; // ivar: _delegate
@property (nonatomic) NSUInteger maximumRows; // ivar: _maximumRows
@property (readonly, nonatomic) PKPass *pass; // ivar: _pass


+(void)extractSupportedVehicleFunction:(*id)arg0 action:(*id)arg1 forTile:(id)arg2 applicationIdentifier:(id)arg3 keyIdentifier:(id)arg4 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_tileViewTapped:(id)arg0 ;
-(void)layoutIfNeededAnimated:(BOOL)arg0 ;
-(void)layoutSubviews;
// -(void)performBatchUpdates:(id)arg0 animated:(unk)arg1  ;
-(void)prepareForReuse;


@end


#endif