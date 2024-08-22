// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WBSRECENTLYBREACHEDSAVEDPASSWORDPROVIDER_H
#define WBSRECENTLYBREACHEDSAVEDPASSWORDPROVIDER_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "WBSPasswordBreachHelperProxy.h"

@interface WBSRecentlyBreachedSavedPasswordProvider : NSObject {
    os_unfair_lock_s _lock;
    WBSPasswordBreachHelperProxy *_helperProxy;
    BOOL _recentlyBreachedSavedPasswordsLookupStarted;
    NSArray *_recentlyBreachedSavedPasswords;
}


@property (readonly, copy, nonatomic) NSArray *recentlyBreachedSavedPasswordsIfAvailable;


+(id)sharedProvider;
-(id)init;
-(void)_getRecentlyBreachedSavedPasswordsWithCompletionHandler:(id)arg0 ;
-(void)_passwordStoreDidChange:(id)arg0 ;
-(void)clearRecentlyBreachedSavedPasswords;
-(void)dealloc;


@end


#endif