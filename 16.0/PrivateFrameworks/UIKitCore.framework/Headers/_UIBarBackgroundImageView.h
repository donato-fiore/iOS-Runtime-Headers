// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIBARBACKGROUNDIMAGEVIEW_H
#define _UIBARBACKGROUNDIMAGEVIEW_H



#import "UIImageView.h"
#import "UIView.h"

@interface _UIBarBackgroundImageView : UIImageView {
    UIView *_topStripView;
    UIImageView *_customImageContainer;
}


@property (nonatomic, getter=isTranslucent) BOOL translucent; // ivar: _translucent


-(id)image;
-(id)topStripView;
-(void)removeTopStripView;
-(void)setImage:(id)arg0 ;
-(void)updateTopStripViewCreateIfNecessary;


@end


#endif