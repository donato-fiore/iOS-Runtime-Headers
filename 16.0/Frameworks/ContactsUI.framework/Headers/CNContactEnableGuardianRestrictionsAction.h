// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNCONTACTENABLEGUARDIANRESTRICTIONSACTION_H
#define CNCONTACTENABLEGUARDIANRESTRICTIONSACTION_H

@class CNContactStore, CNContainer;


#import "CNContactAction.h"

@interface CNContactEnableGuardianRestrictionsAction : CNContactAction

@property (readonly, nonatomic) CNContactStore *contactStore; // ivar: _contactStore
@property (readonly, nonatomic) CNContainer *container; // ivar: _container


-(id)initWithContact:(id)arg0 inContainer:(id)arg1 contactStore:(id)arg2 ;


@end


#endif