// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUNAVIGATIONBARBUTTON_H
#define HUNAVIGATIONBARBUTTON_H

@class UIBarButtonItem, NSNumber, NSString, UIFont, UIMenu;
@protocol HUNavigationBarButtonOwner;



@interface HUNavigationBarButton : UIBarButtonItem {
    ? identifier;
    ? actionHandler;
    ? $__lazy_storage_$_tapGestureRecognizer;
    ? _badgeView;
}


@property (nonatomic) SEL action;
@property (nonatomic, retain) NSNumber *badgeValue; // ivar: badgeValue
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, retain) UIFont *font;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, retain) UIMenu *menu;
@property (nonatomic, weak) NSObject<HUNavigationBarButtonOwner> *owner; // ivar: owner
@property (nonatomic, retain) id *target;


-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)handleTap:(id)arg0 ;
-(void)performAction;


@end


#endif