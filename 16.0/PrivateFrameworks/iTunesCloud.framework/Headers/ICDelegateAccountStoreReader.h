// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICDELEGATEACCOUNTSTOREREADER_H
#define ICDELEGATEACCOUNTSTOREREADER_H

@class NSDate;

#import <Foundation/Foundation.h>

#import "ICSQLiteConnection.h"

@interface ICDelegateAccountStoreReader : NSObject {
    ICSQLiteConnection *_connection;
    BOOL _isValid;
}


@property (readonly, copy, nonatomic) NSDate *lastExpirationPruningDate;
@property (readonly, nonatomic) NSInteger overestimatedNumberOfTokens;


-(id)_tokenWithSQLiteRow:(id)arg0 ;
-(id)_userIdentityWithSQLiteRow:(id)arg0 ;
-(id)identityPropertiesForUserIdentity:(id)arg0 ;
-(id)initWithConnection:(id)arg0 ;
-(id)tokenForUserIdentity:(id)arg0 ;
-(void)_enumerateQueryResults:(id)arg0 usingBlock:(id)arg1 ;
-(void)enumerateDelegationUUIDsForUserIdentity:(id)arg0 usingBlock:(id)arg1 ;
-(void)enumerateTokensUsingBlock:(id)arg0 ;
-(void)enumerateTokensWithType:(NSInteger)arg0 usingBlock:(id)arg1 ;
-(void)invalidate;


@end


#endif