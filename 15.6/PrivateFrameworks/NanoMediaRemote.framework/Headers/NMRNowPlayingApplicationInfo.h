// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NMRNOWPLAYINGAPPLICATIONINFO_H
#define NMRNOWPLAYINGAPPLICATIONINFO_H

@class NSString, NSData;
@protocol NMRMediaRemoteProtobufCodable;

#import <Foundation/Foundation.h>

#import "_NMRNowPlayingApplicationStateProtobuf.h"

@interface NMRNowPlayingApplicationInfo : NSObject <NMRMediaRemoteProtobufCodable>

 {
    _NMRNowPlayingApplicationStateProtobuf *_protobuf;
    int _processID;
}


@property (copy, nonatomic) NSString *companionBundleIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSData *iconDigest;
@property (copy, nonatomic) NSString *localizedDisplayName;
@property (nonatomic) unsigned int playbackState;
@property (nonatomic) int processID;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *watchBundleIdentifier;


+(int)_getNextPlaceholderProcessID;
-(id)init;
-(id)initWithProtobufData:(id)arg0 ;
-(id)protobufData;


@end


#endif