// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TKTOKENCONFIGURATION_H
#define TKTOKENCONFIGURATION_H

@class NSArray, NSData, NSString;

#import <Foundation/Foundation.h>

#import "TKTokenConfigurationConnection.h"
#import "TKTokenID.h"

@interface TKTokenConfiguration : NSObject {
    TKTokenConfigurationConnection *_configurationConnection;
    NSArray *_keychainItems;
}


@property (copy, nonatomic) NSData *configurationData;
@property (readonly, nonatomic) NSString *instanceID;
@property (copy, nonatomic) NSArray *keychainItems;
@property (readonly, nonatomic) TKTokenID *tokenID; // ivar: _tokenID


+(BOOL)_hasSeparateKeysAndCertificatesObjectIDSpace;
+(id)interfaceForProtocol;
+(void)set_hasSeparateKeysAndCertificatesObjectIDSpace:(BOOL)arg0 ;
-(id)beginTransaction;
-(id)certificateForObjectID:(id)arg0 error:(*id)arg1 ;
-(id)initWithTokenID:(id)arg0 configurationConnection:(id)arg1 ;
-(id)keyForObjectID:(id)arg0 error:(*id)arg1 ;


@end


#endif