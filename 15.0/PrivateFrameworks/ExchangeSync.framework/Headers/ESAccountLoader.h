// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ESACCOUNTLOADER_H
#define ESACCOUNTLOADER_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface ESAccountLoader : NSObject

@property (retain, nonatomic) NSMutableDictionary *acAccountTypeToAccountDaemonBundleSubpath; // ivar: _acAccountTypeToAccountDaemonBundleSubpath
@property (retain, nonatomic) NSMutableDictionary *acAccountTypeToAccountFrameworkSubpath; // ivar: _acAccountTypeToAccountFrameworkSubpath
@property (retain, nonatomic) NSMutableDictionary *acAccountTypeToClassNames; // ivar: _acAccountTypeToClassNames
@property (retain, nonatomic) NSMutableDictionary *acParentAccountTypeToChildAccountTypes; // ivar: _acParentAccountTypeToChildAccountTypes


+(id)sharedInstance;
-(BOOL)_loadFrameworkAtSubpath:(id)arg0 ;
-(Class)accountClassForACAccount:(id)arg0 ;
-(Class)agentClassForACAccount:(id)arg0 ;
-(Class)clientAccountClassForACAccount:(id)arg0 ;
-(Class)daemonAccountClassForACAccount:(id)arg0 ;
-(Class)daemonAppropriateAccountClassForACAccount:(id)arg0 ;
-(id)init;
-(void)_addAccountInfo:(id)arg0 forFrameworkNamed:(id)arg1 ;
-(void)loadDaemonBundleForACAccountType:(id)arg0 ;
-(void)loadFrameworkForACAccountType:(id)arg0 ;


@end


#endif