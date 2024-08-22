// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SEARCHUIHEROBUTTON_H
#define SEARCHUIHEROBUTTON_H

@class UIButton, SFCommand, NSString;
@protocol SearchUICommandButton;



@interface SearchUIHeroButton : UIButton <SearchUICommandButton>



@property (retain) SFCommand *command; // ivar: command
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)newButtonsEnabled;
-(id)initWithTitle:(id)arg0 image:(id)arg1 command:(id)arg2 ;
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)didMoveToWindow;
-(void)tlk_updateForAppearance:(id)arg0 ;
-(void)updateWithTitle:(id)arg0 image:(id)arg1 ;


@end


#endif