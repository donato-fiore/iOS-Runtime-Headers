// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CARDDAVICLOUDDELEGATEINFOPROVIDER_H
#define CARDDAVICLOUDDELEGATEINFOPROVIDER_H

@class ACAccountType, NSString;
@protocol CardDAVDelegateInfoProvider;

#import <Foundation/Foundation.h>


@interface CardDAViCloudDelegateInfoProvider : NSObject <CardDAVDelegateInfoProvider>



@property (retain, nonatomic) ACAccountType *accountsType; // ivar: _accountsType
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)delegateInfoForFamilyMembers:(id)arg0 ;
-(BOOL)fetchGuardianStatus:(*BOOL)arg0 family:(id)arg1 account:(id)arg2 error:(*id)arg3 ;
-(id)appleIDsOfExistingDelegates:(id)arg0 ;
-(id)cardDAVAccounts;
-(id)collectDelegatesForAccount:(id)arg0 error:(*id)arg1 ;
-(id)familyCircleReturningError:(*id)arg0 ;
-(id)familyMembersPromise;
-(id)init;
-(id)nonParentsInFamily:(id)arg0 error:(*id)arg1 ;


@end


#endif