// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DKACCOUNTPROVIDER_H
#define DKACCOUNTPROVIDER_H

@class NSString;
@protocol DKAccountProvider;

#import <Foundation/Foundation.h>


@interface DKAccountProvider : NSObject <DKAccountProvider>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)_addAccountDataForAccounts:(id)arg0 toAccountsData:(id)arg1 completion:(id)arg2 ;
-(void)_fetchAccountDataForAccount:(id)arg0 completion:(id)arg1 ;
-(void)fetchAccounts:(id)arg0 ;


@end


#endif