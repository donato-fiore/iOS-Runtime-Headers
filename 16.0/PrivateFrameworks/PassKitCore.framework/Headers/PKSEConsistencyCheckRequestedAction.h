// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKSECONSISTENCYCHECKREQUESTEDACTION_H
#define PKSECONSISTENCYCHECKREQUESTEDACTION_H


#import <Foundation/Foundation.h>

#import "PKSECredentialAddress.h"
#import "PKSEConsistencyCheckDeviceCredential.h"

@interface PKSEConsistencyCheckRequestedAction : NSObject

@property (readonly, nonatomic) NSInteger actions; // ivar: _actions
@property (readonly, nonatomic) PKSECredentialAddress *address; // ivar: _address
@property (readonly, nonatomic) PKSEConsistencyCheckDeviceCredential *deviceCredential; // ivar: _deviceCredential


-(id)description;
-(id)init;
-(id)initWithActions:(NSInteger)arg0 deviceCredential:(id)arg1 address:(id)arg2 ;


@end


#endif