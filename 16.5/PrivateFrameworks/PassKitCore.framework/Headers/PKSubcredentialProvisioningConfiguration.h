// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKSUBCREDENTIALPROVISIONINGCONFIGURATION_H
#define PKSUBCREDENTIALPROVISIONINGCONFIGURATION_H


#import <Foundation/Foundation.h>


@interface PKSubcredentialProvisioningConfiguration : NSObject

@property (readonly, nonatomic) NSInteger configurationType; // ivar: _configurationType


-(NSInteger)startingState;
-(id)acceptInvitationConfiguration;
-(id)initWithConfigurationType:(NSInteger)arg0 ;
-(id)localDeviceConfiguration;
-(id)ownerConfiguration;
-(id)remoteDeviceConfiguration;
-(id)remoteDeviceInvitation;
-(id)transitionTable;


@end


#endif