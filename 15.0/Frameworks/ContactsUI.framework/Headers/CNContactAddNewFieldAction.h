// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNCONTACTADDNEWFIELDACTION_H
#define CNCONTACTADDNEWFIELDACTION_H

@class NSArray;
@protocol CNContactGroupPickerDelegate;


#import "CNContactAction.h"

@interface CNContactAddNewFieldAction : CNContactAction

@property (weak, nonatomic) NSObject<CNContactGroupPickerDelegate> *groupPickerDelegate; // ivar: _groupPickerDelegate
@property (retain, nonatomic) NSArray *prohibitedPropertyKeys; // ivar: _prohibitedPropertyKeys


-(void)performActionWithSender:(id)arg0 ;


@end


#endif