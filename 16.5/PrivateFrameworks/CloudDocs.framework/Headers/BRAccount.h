// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BRACCOUNT_H
#define BRACCOUNT_H

@class NSString, NSData;

#import <Foundation/Foundation.h>


@interface BRAccount : NSObject {
    NSString *_accountID;
    NSString *_personaID;
}


@property (copy, nonatomic) NSData *perAppAccountIdentifier; // ivar: _perAppAccountIdentifier


+(BOOL)_refreshCurrentLoggedInAccountForcingRefresh:(BOOL)arg0 error:(*id)arg1 ;
+(BOOL)refreshCurrentLoggedInAccount;
+(BOOL)refreshCurrentLoggedInAccountWithError:(*id)arg0 ;
+(id)currentCachedLoggedInAccountWithError:(*id)arg0 ;
+(id)currentLoggedInAccountWithError:(*id)arg0 ;
+(void)startAccountTokenChangeObserverIfNeeded;
-(BOOL)getEvictableSpace:(*id)arg0 error:(*id)arg1 ;
-(BOOL)hasOptimizeStorageWithError:(*id)arg0 ;
-(BOOL)iCloudDesktopSettingsChangedWithAttributes:(id)arg0 error:(*id)arg1 ;
-(BOOL)setOptimizeStorageEnabled:(BOOL)arg0 error:(*id)arg1 ;
-(id)containerWithPendingChanges;
-(id)init;
-(id)initWithAccountID:(id)arg0 ;
-(void)evictOldDocumentsWithHandler:(id)arg0 ;


@end


#endif