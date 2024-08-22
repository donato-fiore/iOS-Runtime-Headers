// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VUIMEDIALIBRARYMANAGER_H
#define VUIMEDIALIBRARYMANAGER_H

@class NSString, NSArray;
@protocol VUIHomeShareMediaLibraryManagerDelegate, OS_dispatch_queue, VUIHomeShareMediaLibraryManager;

#import <Foundation/Foundation.h>

#import "VUIMediaLibrary.h"
#import "VUIAggregateMediaLibrary.h"
#import "VUIDeviceMediaLibrary.h"
#import "VUISidebandMediaLibrary.h"

@interface VUIMediaLibraryManager : NSObject <VUIHomeShareMediaLibraryManagerDelegate>



@property (retain, nonatomic) VUIMediaLibrary *activeMediaLibrary; // ivar: _activeMediaLibrary
@property (retain, nonatomic) VUIAggregateMediaLibrary *aggregateMediaLibrary; // ivar: _aggregateMediaLibrary
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *completionDispatchQueue; // ivar: _completionDispatchQueue
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) VUIDeviceMediaLibrary *deviceMediaLibrary; // ivar: _deviceMediaLibrary
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<VUIHomeShareMediaLibraryManager> *homeShareManager; // ivar: _homeShareManager
@property (readonly, copy, nonatomic) NSArray *homeShareMediaLibraries;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialProcessingDispatchQueue; // ivar: _serialProcessingDispatchQueue
@property (retain, nonatomic) VUISidebandMediaLibrary *sidebandMediaLibrary; // ivar: _sidebandMediaLibrary
@property (readonly) Class superclass;


+(id)defaultManager;
+(void)setDeleteAllVideosAndKeysOnInitializationForAppRemoval:(BOOL)arg0 ;
-(id)_homeShareMediaLibraryManager;
-(id)_mediaLibraryForIdentifier:(id)arg0 ;
-(id)init;
-(id)mediaLibraryForIdentifier:(id)arg0 ;
-(void)_enqueueCompletionQueueBlock:(id)arg0 ;
-(void)_enqueueStrongSelfCompletionQueueBlock:(id)arg0 ;
-(void)_postHomeShareMediaLibrariesDidChangeNotificationWithMediaLibraries:(id)arg0 andChangeSet:(id)arg1 ;
-(void)beginDiscoveringHomeShareMediaLibraries;
-(void)endDiscoveringHomeShareMediaLibraries;
-(void)homeShareManager:(id)arg0 mediaLibrariesDidUpdate:(id)arg1 withChangeSet:(id)arg2 ;


@end


#endif