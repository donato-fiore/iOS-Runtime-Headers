// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NWCONCRETE_NW_AUTHENTICATION_CREDENTIAL_H
#define NWCONCRETE_NW_AUTHENTICATION_CREDENTIAL_H

@class NSString;
@protocol OS_nw_authentication_credential, OS_sec_identity, OS_xpc_object;

#import <Foundation/Foundation.h>


@interface NWConcrete_nw_authentication_credential : NSObject <OS_nw_authentication_credential>

 {
    int type;
    char * username;
    char * password;
    NSObject<OS_sec_identity> *identity;
    NSObject<OS_xpc_object> *valid_authentication_types;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)dealloc;


@end


#endif