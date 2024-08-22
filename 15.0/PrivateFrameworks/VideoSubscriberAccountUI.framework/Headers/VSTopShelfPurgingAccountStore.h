// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VSTOPSHELFPURGINGACCOUNTSTORE_H
#define VSTOPSHELFPURGINGACCOUNTSTORE_H

@class VSAccountStore;



@interface VSTopShelfPurgingAccountStore : VSAccountStore



-(void)_purgeTopShelfContent;
-(void)removeAccounts:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)saveAccounts:(id)arg0 withCompletionHandler:(id)arg1 ;


@end


#endif