// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXGTRACKINGCONTAINERVIEW_H
#define PXGTRACKINGCONTAINERVIEW_H

@class UIView;
@protocol PXGReusableView, NSCopying;



@interface PXGTrackingContainerView : UIView <PXGReusableView>



@property (nonatomic) CGRect clippingRect; // ivar: _clippingRect
@property (nonatomic) BOOL isSpriteRemoved; // ivar: _isSpriteRemoved
@property (readonly, nonatomic) BOOL shouldReuseWhenInvisible;
@property (copy, nonatomic) NSObject<NSCopying> *userData; // ivar: _userData


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_removeFromSuperviewIfFinished;
-(void)becomeReusable;
-(void)prepareForReuse;
-(void)willRemoveSubview:(id)arg0 ;


@end


#endif