// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef APSIGNINGAUTHORITYPOOLMANAGER_H
#define APSIGNINGAUTHORITYPOOLMANAGER_H

@class NSString, NSMutableArray;
@protocol APSigningAuthorityPoolManagement;

#import <Foundation/Foundation.h>

#import "APSigningAuthority.h"
#import "APUnfairLock.h"

@interface APSigningAuthorityPoolManager : NSObject <APSigningAuthorityPoolManagement>



@property (retain, nonatomic) APSigningAuthority *currentSigningAuthority; // ivar: _currentSigningAuthority
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) APUnfairLock *lock; // ivar: _lock
@property (nonatomic) NSInteger poolSize; // ivar: _poolSize
@property (retain, nonatomic) NSMutableArray *signingAuthorityPool; // ivar: _signingAuthorityPool
@property (readonly) Class superclass;


+(BOOL)_hasEntitlement:(id)arg0 ;
+(BOOL)_validateAllowListingForPoolCreation:(id)arg0 ;
-(BOOL)isValidSignature:(id)arg0 forData:(id)arg1 error:(*id)arg2 ;
-(id)init;
-(id)initWithPoolSize:(NSInteger)arg0 ;
-(id)signatureForData:(id)arg0 error:(*id)arg1 ;
-(id)signatureForRawData:(id)arg0 error:(*id)arg1 ;
-(id)signingAuthority;
-(void)_refillSigningAuthorityPool;
-(void)_removeNotificationObserverForSigningAuthority:(id)arg0 ;
-(void)_removeSigningAuthority:(id)arg0 ;
-(void)_rotate;
-(void)_signingAuthorityStateChanged:(id)arg0 ;
-(void)_validateSigningAuthority:(id)arg0 ;
-(void)rotate;


@end


#endif