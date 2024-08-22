// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ML3ACCOUNTSTORE_H
#define ML3ACCOUNTSTORE_H

@class NSString, ACAccount;
@protocol _MSVAccountInformationProviding;

#import <Foundation/Foundation.h>


@interface ML3AccountStore : NSObject <_MSVAccountInformationProviding>



@property (readonly, copy, nonatomic) NSString *accountDSID;
@property (readonly, nonatomic) ACAccount *activeAccount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)defaultStore;
-(id)_accountsWithAccountTypeIdentifier:(id)arg0 options:(NSUInteger)arg1 error:(*id)arg2 ;
-(id)_init;
-(id)altDSIDForAccountWithDSID:(NSInteger)arg0 options:(NSUInteger)arg1 error:(*id)arg2 ;


@end


#endif