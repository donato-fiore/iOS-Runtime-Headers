// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PDSREGISTRAR_H
#define PDSREGISTRAR_H

@class NSString;
@protocol PDSRemoteVendor;

#import <Foundation/Foundation.h>


@interface PDSRegistrar : NSObject

@property (retain, nonatomic) NSString *clientID; // ivar: _clientID
@property (retain, nonatomic) NSObject<PDSRemoteVendor> *remoteVendor; // ivar: _remoteVendor


-(BOOL)addRegistration:(id)arg0 toUser:(id)arg1 error:(*id)arg2 ;
-(BOOL)batchUpdateRegistrations:(id)arg0 forUser:(id)arg1 error:(*id)arg2 ;
-(BOOL)deleteRegistration:(id)arg0 fromUser:(id)arg1 error:(*id)arg2 ;
-(BOOL)ensureRegistrationPresent:(id)arg0 forUser:(id)arg1 error:(*id)arg2 ;
-(BOOL)removeAllRegistrationsFromUser:(id)arg0 error:(*id)arg1 ;
-(BOOL)removeRegistration:(id)arg0 fromUser:(id)arg1 error:(*id)arg2 ;
-(id)_activeRegistrationsFromEntries:(id)arg0 ;
-(id)_registrationsFromEntries:(id)arg0 ;
-(id)_wrappedErrorForFailedRemote:(id)arg0 ;
-(id)_wrappedErrorForGivenError:(id)arg0 XPCError:(id)arg1 ;
-(id)activeUsersWithError:(*id)arg0 ;
-(id)allEntriesWithError:(*id)arg0 ;
-(id)allRegistrationsForUser:(id)arg0 error:(*id)arg1 ;
-(id)allRegistrationsWithError:(*id)arg0 ;
-(id)currentRegistrationsForUser:(id)arg0 error:(*id)arg1 ;
-(id)description;
-(id)initWithClientID:(id)arg0 error:(*id)arg1 ;
-(id)usersWithError:(*id)arg0 ;
-(void)activeUsersWithCompletion:(id)arg0 ;
-(void)allEntriesWithCompletion:(id)arg0 ;
-(void)allRegistrationsForUser:(id)arg0 completion:(id)arg1 ;
-(void)allRegistrationsWithCompletion:(id)arg0 ;
-(void)currentRegistrationsForUser:(id)arg0 completion:(id)arg1 ;
-(void)usersWithCompletion:(id)arg0 ;


@end


#endif