// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MFSMIMECONFIGURATIONPROVIDER_H
#define MFSMIMECONFIGURATIONPROVIDER_H

@protocol EDSMIMEConfigurationProvider;

#import <Foundation/Foundation.h>


@interface MFSMIMEConfigurationProvider : NSObject <EDSMIMEConfigurationProvider>



@property (readonly, nonatomic) BOOL encryptionIsConfigured;
@property (readonly, nonatomic) BOOL encryptionIsEnabledByDefault;
@property (readonly, nonatomic) BOOL signingEnabledByDefault;
@property (readonly, nonatomic) BOOL signingIsConfigured;




@end


#endif