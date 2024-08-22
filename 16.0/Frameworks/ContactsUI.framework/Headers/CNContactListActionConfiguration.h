// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNCONTACTLISTACTIONCONFIGURATION_H
#define CNCONTACTLISTACTIONCONFIGURATION_H

@class CNContactFormatter, CNContactStore;

#import <Foundation/Foundation.h>

#import "CNContactStoreFilter.h"
#import "CNContactViewCache.h"
#import "CNUIContactsEnvironment.h"

@interface CNContactListActionConfiguration : NSObject

@property (retain, nonatomic) CNContactFormatter *contactFormatter; // ivar: _contactFormatter
@property (retain, nonatomic) CNContactStore *contactStore; // ivar: _contactStore
@property (retain, nonatomic) CNContactStoreFilter *contactStoreFilter; // ivar: _contactStoreFilter
@property (retain, nonatomic) CNContactViewCache *contactViewCache; // ivar: _contactViewCache
@property (retain, nonatomic) CNUIContactsEnvironment *environment; // ivar: _environment


+(id)log;
-(id)containerForContainerIdentifier:(id)arg0 ;


@end


#endif