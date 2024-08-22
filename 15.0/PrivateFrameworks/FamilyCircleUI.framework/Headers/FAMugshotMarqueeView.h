// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FAMUGSHOTMARQUEEVIEW_H
#define FAMUGSHOTMARQUEEVIEW_H

@class UIView, NSMutableDictionary, UIStackView;


#import "FAProfilePictureStore.h"

@interface FAMugshotMarqueeView : UIView {
    NSMutableDictionary *_memberPhotoMap;
    FAProfilePictureStore *_pictureStore;
    UIStackView *_marquee;
}




-(id)_configureImageViewWithImage:(id)arg0 ;
-(id)_configureImageWithData:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFamilyCircle:(id)arg0 profilePictureStore:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_configureMarquee;
-(void)_configureStackView;
-(void)_profilePictureStoreDidReloadImages:(id)arg0 ;
-(void)dealloc;


@end


#endif