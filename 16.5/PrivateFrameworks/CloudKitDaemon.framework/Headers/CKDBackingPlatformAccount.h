// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKDBACKINGPLATFORMACCOUNT_H
#define CKDBACKINGPLATFORMACCOUNT_H



#import "CKDBackingAccount.h"

@interface CKDBackingPlatformAccount : CKDBackingAccount



-(NSInteger)accountType;
-(id)ckAccount;
-(id)initWithAppleAccount:(id)arg0 ;
-(void)updateAccountPropertiesAndSaveAccount:(id)arg0 ;


@end


#endif