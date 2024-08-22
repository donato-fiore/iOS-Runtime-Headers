// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNCONTACTSTORECONFIGURATION_H
#define CNCONTACTSTORECONFIGURATION_H

@class CNManagedConfiguration;
@protocol OS_tcc_identity;

#import <Foundation/Foundation.h>

#import "CNContactsEnvironment.h"

@interface CNContactStoreConfiguration : NSObject

@property (retain, nonatomic) NSObject<OS_tcc_identity> *assumedIdentity; // ivar: _assumedIdentity
@property (retain, nonatomic) CNContactsEnvironment *environment; // ivar: _environment
@property (nonatomic) BOOL includeDonatedContacts; // ivar: _includeDonatedContacts
@property (nonatomic) BOOL includeIncludeManagedAppleIDs; // ivar: _includeIncludeManagedAppleIDs
@property (nonatomic) BOOL includeLocalContacts; // ivar: _includeLocalContacts
@property (nonatomic) BOOL includeSuggestedContacts; // ivar: _includeSuggestedContacts
@property (retain, nonatomic) CNManagedConfiguration *managedConfiguration; // ivar: _managedConfiguration
@property (nonatomic) BOOL useInProcessMapperExclusively; // ivar: _useInProcessMapperExclusively


-(id)description;
-(id)init;


@end


#endif