// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef OBTEXTWELCOMECONTROLLER_H
#define OBTEXTWELCOMECONTROLLER_H

@class UIStackView;


#import "OBWelcomeController.h"
#import "OBTextBulletedList.h"

@interface OBTextWelcomeController : OBWelcomeController

@property (retain, nonatomic) OBTextBulletedList *currentBulletedList; // ivar: _currentBulletedList
@property (retain, nonatomic) UIStackView *stackView; // ivar: _stackView


-(BOOL)shouldInlineButtonTray;
-(id)initWithTitle:(id)arg0 ;
-(id)initWithTitle:(id)arg0 detailText:(id)arg1 contentLayout:(NSInteger)arg2 ;
-(void)addBulletedListItemWithTitle:(id)arg0 description:(id)arg1 ;
-(void)addBulletedListItemWithTitle:(id)arg0 description:(id)arg1 accessoryButton:(id)arg2 ;
-(void)addSectionWithHeader:(id)arg0 content:(id)arg1 ;
-(void)addSectionWithHeader:(id)arg0 content:(id)arg1 accessoryButton:(id)arg2 ;
-(void)loadView;


@end


#endif