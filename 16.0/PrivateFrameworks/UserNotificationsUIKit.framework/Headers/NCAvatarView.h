// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NCAVATARVIEW_H
#define NCAVATARVIEW_H

@class UIView, UIImageView, MTMaterialView, NCNotificationRequest;
@protocol NSCopying;



@interface NCAvatarView : UIView <NSCopying>

 {
    NSInteger _userInterfaceStyle;
    UIImageView *_imageView;
    MTMaterialView *_backgroundMaterialView;
    BOOL _isGeneratingAvatarImage;
}


@property (nonatomic, getter=isMaterialBacked) BOOL materialBacked; // ivar: _materialBacked
@property (readonly, weak, nonatomic) NCNotificationRequest *notificationRequest; // ivar: _notificationRequest


+(BOOL)isAvatarPossibleWithNotificationRequest:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithNotificationRequest:(id)arg0 ;
-(id)initWithNotificationRequest:(id)arg0 compatibleWithInitialTraitCollection:(id)arg1 ;
-(void)_configureBackgroundMaterialViewIfNecessary;
-(void)_configureImageViewIfNecessary;
-(void)_loadImage:(id)arg0 needsFormatting:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_updateAvatarImageIfNecessary;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif