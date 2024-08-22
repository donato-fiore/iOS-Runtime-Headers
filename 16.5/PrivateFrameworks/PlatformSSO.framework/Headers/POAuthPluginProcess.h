// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef POAUTHPLUGINPROCESS_H
#define POAUTHPLUGINPROCESS_H


#import <Foundation/Foundation.h>

#import "POServiceConnection.h"

@interface POAuthPluginProcess : NSObject {
    POServiceConnection *_serviceConnection;
    unsigned int _uid;
}




-(BOOL)saveCredentialForUserName:(id)arg0 passwordContext:(id)arg1 ;
-(NSUInteger)createUserAccount:(id)arg0 passwordContext:(id)arg1 ;
-(NSUInteger)getLoginTypeForUser:(id)arg0 tokensFresh:(*BOOL)arg1 ;
-(NSUInteger)performLocalPasswordLogin:(id)arg0 passwordContext:(id)arg1 ;
-(NSUInteger)performPasswordLogin:(id)arg0 passwordContext:(id)arg1 updateLocalAccountPassword:(BOOL)arg2 ;
-(NSUInteger)performSEPKeyLogin:(id)arg0 ;
-(id)initWithUid:(unsigned int)arg0 forLogin:(BOOL)arg1 ;
-(void)screenDidUnlock;


@end


#endif