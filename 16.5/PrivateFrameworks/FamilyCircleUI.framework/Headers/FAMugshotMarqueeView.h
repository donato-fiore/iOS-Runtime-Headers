// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FAMUGSHOTMARQUEEVIEW_H
#define FAMUGSHOTMARQUEEVIEW_H

@class UIView, NSMutableDictionary, UIStackView;


#import "FAProfilePictureStore.h"

@interface FAMugshotMarqueeView : UIView {
    NSMutableDictionary *_memberPhotoMap;
    FAProfilePictureStore *_pictureStore;
    id *_membersFilter;
    UIStackView *_marquee;
}




// +(id)imageWithMemberFilter:(id)arg0 profilePictureStore:(unk)arg1  ;
-(CGFloat)shadowRadius;
-(id)_configureImageViewWithImage:(id)arg0 ;
-(id)_configureImageWithData:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFamilyCircle:(id)arg0 profilePictureStore:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
// -(id)initWithMemberFilter:(id)arg0 profilePictureStore:(unk)arg1  ;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_configureMarquee;
-(void)_configureStackView;
-(void)_profilePictureStoreDidReloadImages:(id)arg0 ;
-(void)dealloc;


@end


#endif