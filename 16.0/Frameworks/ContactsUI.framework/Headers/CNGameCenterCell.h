// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNGAMECENTERCELL_H
#define CNGAMECENTERCELL_H

@class UILabel, NSString, UIView, UIViewController;
@protocol CNPresenterDelegate;


#import "CNLabeledCell.h"

@interface CNGameCenterCell : CNLabeledCell

@property (readonly, nonatomic) UILabel *gameCenterLabel; // ivar: _gameCenterLabel
@property (retain, nonatomic) NSString *playerID; // ivar: _playerID
@property (retain, nonatomic) UIView *playerView; // ivar: _playerView
@property (retain, nonatomic) UIView *playerViewContainer; // ivar: _playerViewContainer
@property (weak, nonatomic) NSObject<CNPresenterDelegate> *presentingDelegate; // ivar: _presentingDelegate
@property (retain, nonatomic) UIViewController *profileViewController; // ivar: _profileViewController
@property (nonatomic) BOOL showsGameCenterLabel; // ivar: _showsGameCenterLabel


-(id)constantConstraintsForHorizontalLayout;
-(id)constantConstraintsForVerticalLayout;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(id)labelView;
-(id)variableConstraints;
-(id)variableConstraintsForHorizontalLayout;
-(void)dismissProfileViewController;
-(void)performDefaultAction;
-(void)presentPlayerProfile;
-(void)setCardGroupItem:(id)arg0 ;
-(void)setLabelTextAttributes:(id)arg0 ;
-(void)setupViews;
-(void)updateViewsWithCardGroupItem:(id)arg0 ;


@end


#endif