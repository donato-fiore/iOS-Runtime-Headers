// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CAMMESSAGESPHOTOSBUTTON_H
#define CAMMESSAGESPHOTOSBUTTON_H

@class UIButton, NSString;
@protocol CAMAccessibilityHUDImageProvider;



@interface CAMMessagesPhotosButton : UIButton <CAMAccessibilityHUDImageProvider>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger orientation; // ivar: _orientation
@property (readonly) Class superclass;
@property (nonatomic) UIEdgeInsets tappableEdgeInsets; // ivar: _tappableEdgeInsets


+(id)photosButton;
-(id)imageForAccessibilityHUD;
-(struct UIEdgeInsets )alignmentRectInsets;
-(void)layoutSubviews;


@end


#endif