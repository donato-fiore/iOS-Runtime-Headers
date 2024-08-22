// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPCPLAYERPATH_H
#define MPCPLAYERPATH_H

@class NSString, MPAVRoute;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface MPCPlayerPath : NSObject <NSCopying, NSSecureCoding>

 {
    int _pid;
}


@property (readonly, copy, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (readonly, nonatomic) NSString *deviceUID; // ivar: _deviceUID
@property (readonly, nonatomic, getter=isFullyResolved) BOOL fullyResolved;
@property (readonly, nonatomic, getter=isInProcess) BOOL inProcess;
@property (readonly, nonatomic, getter=isLocal) BOOL local;
@property (readonly, nonatomic) *void mediaRemotePlayerPath; // ivar: _mediaRemotePlayerPath
@property (readonly, nonatomic) *void origin;
@property (readonly, copy, nonatomic) NSString *playerID; // ivar: _playerID
@property (readonly, copy, nonatomic) NSString *representedBundleDisplayName;
@property (readonly, copy, nonatomic) NSString *representedBundleID;
@property (readonly, nonatomic, getter=isResolved) BOOL resolved; // ivar: _resolved
@property (readonly, nonatomic) MPAVRoute *route; // ivar: _route
@property (readonly, nonatomic, getter=isSystemMusicPath) BOOL systemMusicPath;


+(BOOL)supportsSecureCoding;
+(id)deviceActivePlayerPath;
+(id)pathWithCustomOrigin:(*void)arg0 bundleID:(id)arg1 playerID:(id)arg2 ;
+(id)pathWithDeviceUID:(id)arg0 bundleID:(id)arg1 pid:(int)arg2 playerID:(id)arg3 ;
+(id)pathWithDeviceUIDs:(id)arg0 bundleID:(id)arg1 pid:(int)arg2 playerID:(id)arg3 ;
+(id)pathWithRoute:(id)arg0 bundleID:(id)arg1 playerID:(id)arg2 ;
+(id)pathWithRoute:(id)arg0 mediaRemotePlayerPath:(*void)arg1 isResolved:(BOOL)arg2 ;
+(id)systemMusicPathWithRoute:(id)arg0 playerID:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDeviceUID:(id)arg0 bundleID:(id)arg1 pid:(int)arg2 playerID:(id)arg3 ;
-(id)initWithRoute:(id)arg0 bundleID:(id)arg1 pid:(int)arg2 playerID:(id)arg3 ;
-(id)initWithRoute:(id)arg0 bundleID:(id)arg1 playerID:(id)arg2 ;
-(id)pathByAppendingPlayerIDSuffix:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)getPlaybackIntentDestinationWithCompletion:(id)arg0 ;
-(void)resolveWithCompletion:(id)arg0 ;
// -(void)resolveWithRouteResolvedHandler:(id)arg0 completion:(unk)arg1  ;


@end


#endif