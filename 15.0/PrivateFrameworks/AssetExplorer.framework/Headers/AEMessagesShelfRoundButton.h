// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AEMESSAGESSHELFROUNDBUTTON_H
#define AEMESSAGESSHELFROUNDBUTTON_H

@class UIButton;
@protocol PXReusableObject;



@interface AEMessagesShelfRoundButton : UIButton <PXReusableObject>





+(id)_imageForStyle:(NSInteger)arg0 ;
+(id)roundButtonWithStyle:(NSInteger)arg0 ;
+(struct CGSize )intrinsicContentSizeForStyle:(NSInteger)arg0 ;
+(struct CGSize )preferredTapRegionSizeForStyle:(NSInteger)arg0 ;
-(void)_commonAEMessagesRoundButtonInitializationWithStyle:(NSInteger)arg0 ;
-(void)becomeReusable;
-(void)prepareForReuse;


@end


#endif