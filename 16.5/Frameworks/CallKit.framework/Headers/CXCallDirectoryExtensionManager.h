// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CXCALLDIRECTORYEXTENSIONMANAGER_H
#define CXCALLDIRECTORYEXTENSIONMANAGER_H

@protocol CXCallDirectoryExtensionManagerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "CXCallDirectoryManager.h"

@interface CXCallDirectoryExtensionManager : NSObject

@property (weak, nonatomic) NSObject<CXCallDirectoryExtensionManagerDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // ivar: _delegateQueue
@property (readonly, nonatomic) CXCallDirectoryManager *manager; // ivar: _manager
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (nonatomic) int storeExtensionsChangedNotifyToken; // ivar: _storeExtensionsChangedNotifyToken


-(id)init;
-(void)_extensionsChanged;
-(void)beginObservingExtensions;
-(void)dealloc;
-(void)extensionsWithCompletionHandler:(id)arg0 ;
-(void)setEnabled:(BOOL)arg0 forExtension:(id)arg1 completion:(id)arg2 ;
-(void)setPrioritizedExtensionIdentifiers:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif