// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VSACCOUNTCHANNELSCENTER_H
#define VSACCOUNTCHANNELSCENTER_H

@class NSURL, NSString, NSUndoManager;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "VSAccountStore.h"

@interface VSAccountChannelsCenter : NSObject

@property (retain, nonatomic) VSAccountStore *accountStore; // ivar: _accountStore
@property (copy, nonatomic) NSURL *directoryURL; // ivar: _directoryURL
@property (copy, nonatomic) NSString *fileName; // ivar: _fileName
@property (copy, nonatomic) NSURL *fileURL; // ivar: _fileURL
@property (copy, nonatomic) id *identityProviderFetchOperationBlock; // ivar: _identityProviderFetchOperationBlock
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // ivar: _serialQueue
@property (retain, nonatomic) NSUndoManager *undoManager;


+(id)_accountChannelsWithProviderID:(id)arg0 ;
+(id)_defaultDirectoryURL;
+(id)_defaultFileName;
+(id)sharedCenter;
+(void)_startOperationAndWaitForCompletion:(id)arg0 ;
-(id)_removeSavedAccountChannels;
-(id)_saveAccountChannels:(id)arg0 ;
-(id)_savedAccountChannels;
-(id)_savedAccountChannelsForIdentityProviderID:(id)arg0 storeIdentityProvider:(id)arg1 ;
-(id)_storeIdentityProviderForAccount:(id)arg0 ;
-(id)init;
-(id)initWithAccountStore:(id)arg0 ;
-(void)_enqueueRemoveSavedAccountChannelsAndWait;
-(void)_enqueueSaveAccountChannelsAndWait:(id)arg0 ;
-(void)_removeSavedAccountChannelsWithCompletionHandler:(id)arg0 ;
-(void)_saveAccountChannels:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)_snapshotPreviousChannels;
-(void)fetchAccountChannelsWithCompletionHandler:(id)arg0 ;


@end


#endif