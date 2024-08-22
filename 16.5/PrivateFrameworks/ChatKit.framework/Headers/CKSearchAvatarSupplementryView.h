// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKSEARCHAVATARSUPPLEMENTRYVIEW_H
#define CKSEARCHAVATARSUPPLEMENTRYVIEW_H

@class UICollectionReusableView, CNContact, NSString;
@protocol CKSearchResultSupplementryCell;


#import "CKSpotlightQueryResult.h"
#import "CKAvatarView.h"

@interface CKSearchAvatarSupplementryView : UICollectionReusableView <CKSearchResultSupplementryCell>



@property (retain, nonatomic) CKSpotlightQueryResult *associatedResult; // ivar: _associatedResult
@property (retain, nonatomic) CKAvatarView *avatarView; // ivar: _avatarView
@property (retain, nonatomic) CNContact *contact; // ivar: _contact
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) UIEdgeInsets marginInsets; // ivar: marginInsets
@property (nonatomic) NSUInteger parentContentType; // ivar: _parentContentType
@property (readonly) Class superclass;


+(CGFloat)desiredZPosition;
+(id)reuseIdentifier;
+(id)supplementaryViewType;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_parentPreviewDidChange:(id)arg0 ;
-(void)_updateVisibilityIfNeeded;
-(void)layoutSubviews;
-(void)prepareForReuse;


@end


#endif