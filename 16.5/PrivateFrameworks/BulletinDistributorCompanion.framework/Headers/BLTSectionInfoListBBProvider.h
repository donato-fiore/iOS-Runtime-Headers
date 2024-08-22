// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BLTSECTIONINFOLISTBBPROVIDER_H
#define BLTSECTIONINFOLISTBBPROVIDER_H

@class LSApplicationWorkspace, NSString;
@protocol LSApplicationWorkspaceObserverProtocol, BLTSectionInfoObserverDelegate, BLTSectionInfoListBBProvider, OS_dispatch_queue, BLTSectionInfoListProviderDelegate;

#import <Foundation/Foundation.h>

#import "BLTSectionInfoObserver.h"

@interface BLTSectionInfoListBBProvider : NSObject <LSApplicationWorkspaceObserverProtocol, BLTSectionInfoObserverDelegate, BLTSectionInfoListBBProvider>

 {
    BLTSectionInfoObserver *_observer;
    LSApplicationWorkspace *_appWorkspace;
    NSObject<OS_dispatch_queue> *_queue;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<BLTSectionInfoListProviderDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(id)initWithSettingsGateway:(id)arg0 ;
-(id)sectionInfoForSectionID:(id)arg0 ;
-(void)applicationIconDidChange:(id)arg0 ;
-(void)applicationsDidInstall:(id)arg0 ;
-(void)applicationsDidUninstall:(id)arg0 ;
-(void)dealloc;
-(void)reloadSection:(id)arg0 completion:(id)arg1 ;
-(void)reloadWithCompletion:(id)arg0 ;
-(void)sectionInfoObserver:(id)arg0 removedSectionWithSectionID:(id)arg1 transaction:(id)arg2 ;
-(void)sectionInfoObserver:(id)arg0 updatedSectionInfoForSectionIDs:(id)arg1 transaction:(id)arg2 ;


@end


#endif