// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EMMESSAGECONTENTCACHEDMETADATA_H
#define EMMESSAGECONTENTCACHEDMETADATA_H

@class NSMutableDictionary;
@protocol EMMessageContentCachedMetadataDelegate;

#import <Foundation/Foundation.h>


@interface EMMessageContentCachedMetadata : NSObject {
    os_unfair_lock_s _lock;
    BOOL _didLogCachedMetadataError;
    id<EMMessageContentCachedMetadataDelegate> *_delegate;
    NSMutableDictionary *_localCache;
}


@property (nonatomic) BOOL showRemoteImages;
@property (nonatomic) BOOL skipMessageReformatting;


-(id)initWithDelegate:(id)arg0 ;


@end


#endif