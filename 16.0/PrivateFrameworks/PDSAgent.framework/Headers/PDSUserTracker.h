// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PDSUSERTRACKER_H
#define PDSUSERTRACKER_H


#import <Foundation/Foundation.h>


@interface PDSUserTracker : NSObject

@property (copy, nonatomic) id *accountStoreBlock; // ivar: _accountStoreBlock


+(id)standardAccountStore;
-(BOOL)validUser:(id)arg0 withError:(*id)arg1 ;
-(id)_accountForUser:(id)arg0 withError:(*id)arg1 ;
-(id)init;
-(id)initWithAccountStoreBlock:(id)arg0 ;
-(id)tokenAndIdentifier:(*id)arg0 forUser:(id)arg1 withError:(*id)arg2 ;
-(void)refreshCredentialsForUser:(id)arg0 withError:(*id)arg1 completion:(id)arg2 ;


@end


#endif