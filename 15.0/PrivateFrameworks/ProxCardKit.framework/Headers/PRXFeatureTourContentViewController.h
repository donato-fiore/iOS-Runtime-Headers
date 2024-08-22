// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PRXFEATURETOURCONTENTVIEWCONTROLLER_H
#define PRXFEATURETOURCONTENTVIEWCONTROLLER_H

@class UIViewController, NSString;
@protocol PRXCardContentProviding;


#import "PRXFeatureTourContentView.h"
#import "PRXAction.h"

@interface PRXFeatureTourContentViewController : UIViewController <PRXCardContentProviding>

 {
    PRXFeatureTourContentView *_contentView;
}


@property (readonly, nonatomic) BOOL allowsPullToDismiss;
@property (copy, nonatomic) NSString *bodyText; // ivar: _bodyText
@property (readonly, nonatomic) NSInteger cardStyle;
@property (readonly, nonatomic) PRXFeatureTourContentView *contentView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) PRXAction *dismissButtonAction; // ivar: _dismissButtonAction
@property (nonatomic) NSUInteger dismissalType; // ivar: _dismissalType
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)dismissalConfirmationActionWithTitle:(id)arg0 message:(id)arg1 confirmButtonTitle:(id)arg2 cancelButtonTitle:(id)arg3 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)_updateBodyView;
-(void)_updateDismissButton;
-(void)_updateTitleView;
-(void)loadView;
-(void)setTitle:(id)arg0 ;
-(void)updatePreferredContentSizeForCardWidth:(CGFloat)arg0 ;
-(void)viewDidLoad;


@end


#endif