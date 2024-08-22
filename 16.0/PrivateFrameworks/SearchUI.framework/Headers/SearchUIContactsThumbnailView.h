// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SEARCHUICONTACTSTHUMBNAILVIEW_H
#define SEARCHUICONTACTSTHUMBNAILVIEW_H

@class CNAvatarView, SFContactImage;



@interface SearchUIContactsThumbnailView : CNAvatarView

@property (retain, nonatomic) SFContactImage *contactImage; // ivar: _contactImage
@property (nonatomic) BOOL forcePressViewIsEntireEnclosingCell; // ivar: _forcePressViewIsEntireEnclosingCell
@property (nonatomic) BOOL useCompactDisplay; // ivar: _useCompactDisplay
@property (nonatomic) BOOL usesCompactWidth; // ivar: _usesCompactWidth


+(id)avatarSettings;
+(void)clearAvatarSettings;
-(id)init;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)didMoveToWindow;
-(void)layoutSubviews;
-(void)tlk_updateForAppearance:(id)arg0 ;
-(void)updateForcePressView;
-(void)updateWithRowModel:(id)arg0 ;


@end


#endif