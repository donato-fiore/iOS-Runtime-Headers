// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC18PODCASTSFOUNDATION22FAIRPLAYKEYSESSIONMOCK_H
#define _TTC18PODCASTSFOUNDATION22FAIRPLAYKEYSESSIONMOCK_H

@class SwiftObject, NSString;
@protocol PFFairPlayKeySession;


#import "PFFairPlayAsset.h"

@interface _TtC18PodcastsFoundation22FairPlayKeySessionMock : SwiftObject <PFFairPlayKeySession>

 {
    ? id;
    ? adamIDHandler;
    ? assetHandler;
    ? bypassCacheHandler;
    ? keyStoreFilePathHandler;
    ? registerHandler;
    ? deregisterHandler;
    ? processHandler;
    ? stopAndInvalidateHandler;
}


@property (nonatomic, readonly) PFFairPlayAsset *asset;
@property (nonatomic) BOOL bypassCache;
@property (nonatomic, readonly) NSString *id;
@property (nonatomic, readonly) NSString *keyStoreFilePath;


-(void)deregister;
-(void)processKeyWith:(id)arg0 completion:(id)arg1 ;
-(void)register;
-(void)stopAndInvalidateKeysWithCompletion:(id)arg0 ;


@end


#endif