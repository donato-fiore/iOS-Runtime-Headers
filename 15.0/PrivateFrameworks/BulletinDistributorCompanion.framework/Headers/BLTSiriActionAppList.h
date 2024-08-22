// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BLTSIRIACTIONAPPLIST_H
#define BLTSIRIACTIONAPPLIST_H

@class NSMutableDictionary, NSMutableSet, NSURL, NSString, NSDictionary, NSSet;
@protocol LSApplicationWorkspaceObserverProtocol, OS_dispatch_queue, BLTSiriActionAppListDelegate;

#import <Foundation/Foundation.h>


@interface BLTSiriActionAppList : NSObject <LSApplicationWorkspaceObserverProtocol>

 {
    NSMutableDictionary *_installed;
    NSMutableSet *_removed;
    NSObject<OS_dispatch_queue> *_appListQueue;
    NSURL *_siriActionAppListStoreURL;
    NSMutableSet *_appListStore;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<BLTSiriActionAppListDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSDictionary *installed;
@property (readonly, nonatomic) NSSet *removed;
@property (readonly) Class superclass;


-(BOOL)_handleAppListInstalled:(id)arg0 removed:(id)arg1 ;
-(id)_siriActionAppListStoreURL;
-(id)init;
-(void)applicationIconDidChange:(id)arg0 ;
-(void)applicationsDidInstall:(id)arg0 ;
-(void)applicationsDidUninstall:(id)arg0 ;
-(void)dealloc;
-(void)updateStoreWithInstalled:(id)arg0 removed:(id)arg1 ;


@end


#endif