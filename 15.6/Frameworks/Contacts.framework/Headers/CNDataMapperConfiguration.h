// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNDATAMAPPERCONFIGURATION_H
#define CNDATAMAPPERCONFIGURATION_H

@class CNManagedConfiguration;
@protocol OS_tcc_identity;

#import <Foundation/Foundation.h>

#import "CNContactsEnvironment.h"

@interface CNDataMapperConfiguration : NSObject

@property (retain, nonatomic) NSObject<OS_tcc_identity> *assumedIdentity; // ivar: _assumedIdentity
@property (retain, nonatomic) CNContactsEnvironment *environment; // ivar: _environment
@property (retain, nonatomic) CNManagedConfiguration *managedConfiguration; // ivar: _managedConfiguration


-(id)description;
-(id)initWithContactStoreConfiguration:(id)arg0 ;


@end


#endif