// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MRPLAYERPATH_H
#define MRPLAYERPATH_H

@class NSData;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "MRClient.h"
#import "MRPlayerPath.h"
#import "MROrigin.h"
#import "MRPlayer.h"
#import "_MRNowPlayingPlayerPathProtobuf.h"

@interface MRPlayerPath : NSObject <NSCopying, NSSecureCoding>



@property (copy, nonatomic) MRClient *client; // ivar: _client
@property (readonly, copy, nonatomic) NSData *data;
@property (readonly, nonatomic, getter=isHomepodDemoApplication) BOOL homepodDemoApplication;
@property (readonly, nonatomic, getter=isLocal) BOOL local;
@property (readonly, nonatomic) MRPlayerPath *localResolvedPlayerPath;
@property (copy, nonatomic) MROrigin *origin; // ivar: _origin
@property (copy, nonatomic) MRPlayer *player; // ivar: _player
@property (readonly, nonatomic) _MRNowPlayingPlayerPathProtobuf *protobuf;
@property (readonly, nonatomic, getter=isResolved) BOOL resolved;
@property (readonly, nonatomic) MRPlayerPath *skeleton;
@property (readonly, nonatomic, getter=isSystemBooksApplication) BOOL systemBooksApplication;
@property (readonly, nonatomic, getter=isSystemMediaApplication) BOOL systemMediaApplication;
@property (readonly, nonatomic, getter=isSystemPodcastsApplication) BOOL systemPodcastsApplication;


+(BOOL)supportsSecureCoding;
+(id)anyPlayerPath;
+(id)localPlayerPath;
+(id)localResolvedPlayerPathFromPlayerPath:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithData:(id)arg0 ;
-(id)initWithOrigin:(id)arg0 client:(id)arg1 player:(id)arg2 ;
-(id)initWithProtobuf:(id)arg0 ;
-(id)playerPathByLocalizingWithOrigin:(id)arg0 ;
-(id)playerPathByRedirectingToOrigin:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif