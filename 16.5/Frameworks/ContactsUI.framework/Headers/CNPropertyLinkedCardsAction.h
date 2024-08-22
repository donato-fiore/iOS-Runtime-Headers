// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNPROPERTYLINKEDCARDSACTION_H
#define CNPROPERTYLINKEDCARDSACTION_H

@class CNMutableContact;
@protocol CNContactContentViewControllerDelegate;


#import "CNPropertyAction.h"
#import "CNContactContentViewController.h"

@interface CNPropertyLinkedCardsAction : CNPropertyAction

@property (retain) CNContactContentViewController *contactController; // ivar: _contactController
@property (weak) NSObject<CNContactContentViewControllerDelegate> *contactDelegate; // ivar: _contactDelegate
@property (retain) CNMutableContact *linkedContact; // ivar: _linkedContact


-(id)initWithContact:(id)arg0 ;
-(void)dealloc;
-(void)performActionForItem:(id)arg0 sender:(id)arg1 ;
-(void)setPreferredForImage;
-(void)setPreferredForName;


@end


#endif