// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICRDACTIVITY_H
#define ICRDACTIVITY_H

@class UIActivity, UIColor, UIMenu;



@interface ICRDActivity : UIActivity

@property (copy, nonatomic) UIColor *activityTintColor; // ivar: _activityTintColor
@property (nonatomic) NSInteger contextPathEnum; // ivar: _contextPathEnum
@property (nonatomic) BOOL isDisabled; // ivar: _isDisabled
@property (readonly, nonatomic) UIMenu *menu; // ivar: _menu
@property (copy, nonatomic) id *performActivityBlock; // ivar: _performActivityBlock
@property (nonatomic) BOOL performActivityShouldDismissViewController; // ivar: _performActivityShouldDismissViewController


+(id)defaultTintColor;
-(id)init;
-(id)initWithPerformActivity:(id)arg0 ;
-(void)commonInit;
-(void)performActivity;
-(void)performActivityWithCompletion:(id)arg0 ;


@end


#endif