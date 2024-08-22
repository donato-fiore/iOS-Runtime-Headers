// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNCONTACTLISTREMOVECONTACTFROMGROUPACTION_H
#define CNCONTACTLISTREMOVECONTACTFROMGROUPACTION_H

@class CNContact, CNContactStore, NSString, CNGroup;

#import <Foundation/Foundation.h>


@interface CNContactListRemoveContactFromGroupAction : NSObject

@property (retain, nonatomic) CNContact *contact; // ivar: _contact
@property (retain, nonatomic) CNContactStore *contactStore; // ivar: _contactStore
@property (retain, nonatomic) NSString *containerIdentifier; // ivar: _containerIdentifier
@property (retain, nonatomic) CNGroup *group; // ivar: _group


+(id)log;
-(BOOL)executeAction;
-(BOOL)executeRemoveFromGroupAction;
-(id)initWithContact:(id)arg0 contactStore:(id)arg1 containerIdentifier:(id)arg2 ;
-(void)undoAction;
-(void)undoRemoveFromGroupAction;


@end


#endif