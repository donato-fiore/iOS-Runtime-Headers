// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PCSACCOUNTSMODEL_H
#define PCSACCOUNTSMODEL_H

@class NSString, ACAccountStore;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PCSAccountsModel : NSObject

@property BOOL accountsChanged; // ivar: _accountsChanged
@property (readonly) NSString *dsid; // ivar: _dsid
@property (readonly) NSString *identifier; // ivar: _identifier
@property (readonly) NSString *lastError; // ivar: _lastError
@property (retain) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain) ACAccountStore *store; // ivar: _store
@property (readonly) NSString *username; // ivar: _username


+(BOOL)currentPersonaSupportsPrimaryAccount:(*id)arg0 ;
+(id)accountForCurrentPersona;
+(id)defaultAccountsModel;
+(id)settingsKeyForKey:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(void)_accountStoreDidChange:(id)arg0 ;
-(void)faultIfCurrentPersonaIsDataSeparated;
-(void)update;


@end


#endif