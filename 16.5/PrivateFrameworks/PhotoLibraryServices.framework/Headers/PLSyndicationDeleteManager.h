// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLSYNDICATIONDELETEMANAGER_H
#define PLSYNDICATIONDELETEMANAGER_H

@class NSString;
@protocol OS_dispatch_queue, PLSyndicationDeleteManagerDelegate;

#import <Foundation/Foundation.h>


@interface PLSyndicationDeleteManager : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_path;
    NSInteger _wellKnownPhotoLibraryIdentifier;
}


@property (readonly, weak, nonatomic) NSObject<PLSyndicationDeleteManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) NSString *logPrefix; // ivar: _logPrefix


-(BOOL)_deleteConversationWithBundleID:(id)arg0 syndicationIdentifiers:(id)arg1 ;
-(BOOL)_deleteSyndicationAssetsWithBundleID:(id)arg0 syndicationIdentifiers:(id)arg1 deleteCount:(*NSInteger)arg2 ;
-(BOOL)_processDeletesForBundleID:(id)arg0 unprefixedIdentifiers:(id)arg1 ;
-(id)initWithDelegate:(id)arg0 path:(id)arg1 logPrefix:(id)arg2 ;
-(id)initWithLibraryServicesManager:(id)arg0 ;
-(void)_inqueueProcessDeletesForBundleID:(id)arg0 identifiers:(id)arg1 ;
-(void)processDeletesForBundleID:(id)arg0 identifiers:(id)arg1 completion:(id)arg2 ;


@end


#endif