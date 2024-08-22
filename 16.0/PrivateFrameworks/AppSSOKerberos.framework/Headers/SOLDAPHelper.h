// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SOLDAPHELPER_H
#define SOLDAPHELPER_H

@protocol OS_nw_connection, OS_ldap_connection;

#import <Foundation/Foundation.h>


@interface SOLDAPHelper : NSObject

@property BOOL completionCalled; // ivar: _completionCalled
@property (retain) NSObject<OS_nw_connection> *connection; // ivar: _connection
@property (nonatomic) BOOL isConnected; // ivar: _isConnected
@property (retain, nonatomic) NSObject<OS_ldap_connection> *ldap; // ivar: _ldap


-(id)init;
-(void)connectToLDAPServer:(id)arg0 andPort:(unsigned short)arg1 andBundleIdentifier:(id)arg2 andRequireTLSForLDAP:(BOOL)arg3 completion:(id)arg4 ;
-(void)connectToLDAPService:(id)arg0 requireTLSForLDAP:(BOOL)arg1 bundleIdentifier:(id)arg2 inBackground:(BOOL)arg3 completion:(id)arg4 ;
-(void)connectToLDAPWithCompletion:(id)arg0 ;
-(void)dealloc;
-(void)disconnect;
-(void)queryforBaseDN:(id)arg0 andScope:(int)arg1 andAttributes:(id)arg2 withFilter:(id)arg3 completion:(id)arg4 ;
-(void)setupLDAPconnection:(id)arg0 andPort:(unsigned short)arg1 andRequireTLSForLDAP:(BOOL)arg2 andBundleIdentifier:(id)arg3 ;
-(void)startLDAPWithCompletion:(id)arg0 ;
-(void)useDigestMD5Auth:(id)arg0 andPassword:(id)arg1 ;
-(void)useKerberosAuth:(struct gss_cred_id_t_desc_struct *)arg0 forSPN:(id)arg1 ;


@end


#endif