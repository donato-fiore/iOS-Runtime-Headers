// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUPEOPLEAVATARVIEW_H
#define PUPEOPLEAVATARVIEW_H

@class UIImageView, UIImage, UIGraphicsImageRenderer, CAShapeLayer, PHAssetCollection;
@protocol OS_os_log;



@interface PUPeopleAvatarView : UIImageView {
    BOOL _isRTL;
}


@property (nonatomic, getter=isEnabled) BOOL enabled; // ivar: _enabled
@property (retain, nonatomic) UIImage *firstAvatar; // ivar: _firstAvatar
@property (retain, nonatomic) UIGraphicsImageRenderer *imageRenderer; // ivar: _imageRenderer
@property (readonly) NSObject<OS_os_log> *log;
@property (retain, nonatomic) CAShapeLayer *overlayLayer; // ivar: _overlayLayer
@property (retain, nonatomic) UIImage *secondAvatar; // ivar: _secondAvatar
@property (retain, nonatomic) PHAssetCollection *sharedAlbumCollection; // ivar: _sharedAlbumCollection
@property (retain, nonatomic) UIImage *thirdAvatar; // ivar: _thirdAvatar


+(id)serialQueue;
+(struct CGSize )_sizeForNumberOfAvatars:(NSUInteger)arg0 ;
+(void)_requestPersonPhoto:(id)arg0 displayScale:(CGFloat)arg1 highQualityFormat:(BOOL)arg2 resultHandler:(id)arg3 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_generateAvatars;
-(void)_renderAvatarsForAlbumCollection:(id)arg0 ;
-(void)_requestSubscriberMonogram:(id)arg0 resultHandler:(id)arg1 ;
-(void)_resetImages;
-(void)_resetViewContents;
-(void)_resetViewContentsIfNeededForAlbumCollection:(id)arg0 ;
-(void)_setContentsImage:(id)arg0 withShadowPath:(struct CGPath *)arg1 forAlbumCollection:(id)arg2 ;
-(void)_setImage:(id)arg0 forIndex:(NSUInteger)arg1 ;
-(void)_updateAvatars;
-(void)accessibilityInvertColorsStatusDidChange:(id)arg0 ;
-(void)embedInView:(id)arg0 ;
-(void)prepareForReuse;
-(void)setPersonPhoto:(id)arg0 atIndex:(NSInteger)arg1 albumCollection:(id)arg2 ;


@end


#endif