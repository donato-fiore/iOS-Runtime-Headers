// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUPEOPLETILECOLLECTIONVIEWCELL_H
#define PUPEOPLETILECOLLECTIONVIEWCELL_H

@class UICollectionViewCell, PHAsset, UIImageView, UIButton, PHPerson, UIView, UIGraphicsImageRenderer, PXSuggestLessPeopleHelper;
@protocol PXSuggestLessPeopleHelperDelegate, PUPeopleTileDelegate;



@interface PUPeopleTileCollectionViewCell : UICollectionViewCell <PXSuggestLessPeopleHelperDelegate>



@property (retain, nonatomic) PHAsset *asset; // ivar: _asset
@property (readonly, nonatomic) UIImageView *avatarImageView; // ivar: _avatarImageView
@property (readonly, nonatomic) UIButton *menuButton; // ivar: _menuButton
@property (weak, nonatomic) NSObject<PUPeopleTileDelegate> *peopleDelegate; // ivar: _peopleDelegate
@property (retain, nonatomic) PHPerson *person; // ivar: _person
@property CGSize previousContentViewSize; // ivar: _previousContentViewSize
@property (retain, nonatomic) UIView *questionView; // ivar: _questionView
@property (retain, nonatomic) UIGraphicsImageRenderer *renderer; // ivar: _renderer
@property (readonly, nonatomic) UIView *shadowView; // ivar: _shadowView
@property (retain, nonatomic) PXSuggestLessPeopleHelper *suggestLessPeopleHelper; // ivar: _suggestLessPeopleHelper


+(struct CGSize )itemSizeForTraitCollection:(id)arg0 ;
-(BOOL)suggestLessPeopleHelper:(id)arg0 dismissViewController:(id)arg1 completionHandler:(id)arg2 ;
-(BOOL)suggestLessPeopleHelper:(id)arg0 presentViewController:(id)arg1 ;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_displayAvatarImageRequestResult:(id)arg0 faceRect:(struct CGRect )arg1 error:(id)arg2 ;
-(void)_featureLessActionTapped:(id)arg0 ;
-(void)_manageTagsActionTapped:(id)arg0 ;
-(void)_nameActionTapped:(id)arg0 ;
-(void)_reloadAvatarImageViewForPerson:(id)arg0 ;
-(void)_setupActionsForPerson:(id)arg0 asset:(id)arg1 ;
-(void)_showAlbumActionTapped:(id)arg0 ;
-(void)_untagActionTapped:(id)arg0 asset:(id)arg1 ;
-(void)accessibilityInvertColorsStatusDidChange:(id)arg0 ;
-(void)layoutSubviews;


@end


#endif