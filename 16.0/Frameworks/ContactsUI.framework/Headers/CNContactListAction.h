// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNCONTACTLISTACTION_H
#define CNCONTACTLISTACTION_H

@class NSArray;
@protocol CNContactListActionDelegate;

#import <Foundation/Foundation.h>

#import "CNContactListActionConfiguration.h"

@interface CNContactListAction : NSObject

@property (retain, nonatomic) CNContactListActionConfiguration *configuration; // ivar: _configuration
@property (retain, nonatomic) NSArray *contacts; // ivar: _contacts
@property (weak, nonatomic) NSObject<CNContactListActionDelegate> *delegate; // ivar: _delegate


-(BOOL)editRequiresAuthorization;
-(BOOL)editRequiresAuthorizationCheckForContact:(id)arg0 containerIdentifier:(id)arg1 ;
-(BOOL)shouldReloadListOnCompletion;
-(id)initWithContacts:(id)arg0 configuration:(id)arg1 ;
-(void)performAction;


@end


#endif