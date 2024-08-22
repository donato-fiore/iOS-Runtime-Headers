// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ESACCOUNT_H
#define ESACCOUNT_H

@class DAAccount;



@interface ESAccount : DAAccount



+(id)_leafExchangeAccountTypes;
+(id)esAccountSubclassWithBackingAccountInfo:(id)arg0 ;
+(id)oneshotListOfAccountIDs;
+(void)reacquireClientRestrictions:(id)arg0 ;
-(void)retrieveOofSettingsForConsumer:(id)arg0 ;
-(void)updateOofSettingsWithParams:(id)arg0 consumer:(id)arg1 ;


@end


#endif