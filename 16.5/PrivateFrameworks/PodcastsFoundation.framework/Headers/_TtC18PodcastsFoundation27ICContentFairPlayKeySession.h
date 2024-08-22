// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC18PODCASTSFOUNDATION27ICCONTENTFAIRPLAYKEYSESSION_H
#define _TTC18PODCASTSFOUNDATION27ICCONTENTFAIRPLAYKEYSESSION_H

@class SwiftObject, NSString;
@protocol PFFairPlayKeySession;


#import "PFFairPlayAsset.h"

@interface _TtC18PodcastsFoundation27ICContentFairPlayKeySession : SwiftObject <PFFairPlayKeySession>

 {
    ? id;
    ? keyStore;
    ? requestContext;
    ? keyCertificateURL;
    ? urlConfiguration;
    ? pendingProcessCompletion;
    ? $__lazy_storage_$_delegateWrapper;
    ? $__lazy_storage_$_logPrefix;
    ? $__lazy_storage_$_session;
}


@property (nonatomic, readonly) PFFairPlayAsset *asset; // ivar: asset
@property (nonatomic) BOOL bypassCache; // ivar: bypassCache
@property (nonatomic, readonly) NSString *id;
@property (nonatomic, readonly) NSString *keyStoreFilePath;


-(void)deregister;
-(void)processKeyWith:(id)arg0 completion:(id)arg1 ;
-(void)register;
-(void)stopAndInvalidateKeysWithCompletion:(id)arg0 ;


@end


#endif