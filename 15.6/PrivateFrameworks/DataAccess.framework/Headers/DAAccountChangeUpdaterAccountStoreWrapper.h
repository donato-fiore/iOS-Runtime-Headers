// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DAACCOUNTCHANGEUPDATERACCOUNTSTOREWRAPPER_H
#define DAACCOUNTCHANGEUPDATERACCOUNTSTOREWRAPPER_H

@class ACAccountStore, NSString;
@protocol DAAccountChangeHandlerAccountStoreUpdater;

#import <Foundation/Foundation.h>


@interface DAAccountChangeUpdaterAccountStoreWrapper : NSObject <DAAccountChangeHandlerAccountStoreUpdater>

 {
    ACAccountStore *_store;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithAccountStore:(id)arg0 ;
-(void)addAccount:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)removeAccount:(id)arg0 completion:(id)arg1 ;
-(void)updateAccount:(id)arg0 withCompletionHandler:(id)arg1 ;


@end


#endif