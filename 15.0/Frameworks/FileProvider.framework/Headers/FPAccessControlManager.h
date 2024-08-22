// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FPACCESSCONTROLMANAGER_H
#define FPACCESSCONTROLMANAGER_H


#import <Foundation/Foundation.h>


@interface FPAccessControlManager : NSObject



-(BOOL)revokeAccessToAllBundles;
-(void)_killBundle:(id)arg0 completionHandler:(id)arg1 ;
-(void)bundleIdentifiersWithAccessToAnyItemCompletionHandler:(id)arg0 ;
-(void)collectionForItemsAccessibleByBundleIdentifier:(id)arg0 completionHandler:(id)arg1 ;
-(void)revokeAccessToAllBundlesCompletionHandler:(id)arg0 ;
-(void)revokeAccessToAllItemsForBundle:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif