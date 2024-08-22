// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNCONTACTLISTDELETECONTACTACTION_H
#define CNCONTACTLISTDELETECONTACTACTION_H

@class CNContact, CNContactStore, NSString, CNUICoreRecentsManager;

#import <Foundation/Foundation.h>


@interface CNContactListDeleteContactAction : NSObject

@property (retain, nonatomic) CNContact *contact; // ivar: _contact
@property (retain, nonatomic) CNContactStore *contactStore; // ivar: _contactStore
@property (retain, nonatomic) NSString *containerIdentifier; // ivar: _containerIdentifier
@property (retain, nonatomic) CNUICoreRecentsManager *recentsManager; // ivar: _recentsManager


+(id)log;
-(BOOL)executeAction;
-(BOOL)executeDeleteAction;
-(id)initWithContact:(id)arg0 contactStore:(id)arg1 containerIdentifier:(id)arg2 recentsManager:(id)arg3 ;
-(void)undoAction;
-(void)undoDeleteAction;


@end


#endif