// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKLINKEDAPPICONVIEW_H
#define PKLINKEDAPPICONVIEW_H

@class UIView, UIImage, NSString;
@protocol PKLinkedApplicationObserver;


#import "WLEasyToHitCustomButton.h"
#import "PKLinkedApplication.h"

@interface PKLinkedAppIconView : UIView <PKLinkedApplicationObserver>

 {
    WLEasyToHitCustomButton *_iconButton;
    UIImage *_iconImage;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) PKLinkedApplication *linkedApplication; // ivar: _linkedApplication
@property (readonly) Class superclass;


-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithLinkedApplication:(id)arg0 ;
-(struct CGSize )intrinsicContentSize;
-(void)_updateWithIconImage:(id)arg0 animated:(BOOL)arg1 ;
-(void)dealloc;
-(void)didMoveToWindow;
-(void)layoutSubviews;
-(void)linkedApplicationDidChangeState:(id)arg0 ;
-(void)tapped:(id)arg0 ;


@end


#endif