// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NMRNOWPLAYINGCLIENT_H
#define NMRNOWPLAYINGCLIENT_H

@class NSString;

#import <Foundation/Foundation.h>


@interface NMRNowPlayingClient : NSObject

@property (readonly, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (readonly, nonatomic) NSString *displayName; // ivar: _displayName
@property (readonly, nonatomic) *void mediaRemoteNowPlayingClient; // ivar: _mediaRemoteNowPlayingClient


-(BOOL)isEqual:(id)arg0 ;
-(id)initWithMRNowPlayingClient:(*void)arg0 ;
-(void)dealloc;


@end


#endif