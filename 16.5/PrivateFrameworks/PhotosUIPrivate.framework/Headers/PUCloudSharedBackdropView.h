// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUCLOUDSHAREDBACKDROPVIEW_H
#define PUCLOUDSHAREDBACKDROPVIEW_H

@class UIView;



@interface PUCloudSharedBackdropView : UIView {
    UIView *_backdropView;
    BOOL _isMask;
}


@property (nonatomic) BOOL hasRoundedCorners; // ivar: _hasRoundedCorners


-(id)init;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 asMask:(BOOL)arg1 ;
-(void)layoutSubviews;


@end


#endif