// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SEARCHUICONTACTVIEWCONTROLLER_H
#define SEARCHUICONTACTVIEWCONTROLLER_H

@class CNContactViewController;



@interface SearchUIContactViewController : CNContactViewController



+(id)viewControllerForContact:(id)arg0 isUnknown:(BOOL)arg1 ;
-(BOOL)canBecomeFirstResponder;
-(NSUInteger)edgesForExtendedLayout;
-(id)keyCommands;
-(void)leftArrowPressed;


@end


#endif