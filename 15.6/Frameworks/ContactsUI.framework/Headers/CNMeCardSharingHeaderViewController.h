// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNMECARDSHARINGHEADERVIEWCONTROLLER_H
#define CNMECARDSHARINGHEADERVIEWCONTROLLER_H

@class UIViewController, NSString, UILabel;


#import "CNMeCardSharingAvatarViewController.h"
#import "CNMeCardSharingPickerLayoutAttributes.h"

@interface CNMeCardSharingHeaderViewController : UIViewController

@property (retain, nonatomic) CNMeCardSharingAvatarViewController *avatarViewController; // ivar: _avatarViewController
@property (retain, nonatomic) CNMeCardSharingPickerLayoutAttributes *layoutAttributes; // ivar: _layoutAttributes
@property (nonatomic) NSUInteger mode; // ivar: _mode
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) UILabel *nameLabel; // ivar: _nameLabel


-(CGFloat)desiredHeight;
-(id)initWithAvatarViewController:(id)arg0 name:(id)arg1 layoutAttributes:(id)arg2 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;


@end


#endif