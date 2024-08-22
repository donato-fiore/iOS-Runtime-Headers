// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MRSHAREDSETTINGS_H
#define MRSHAREDSETTINGS_H


#import <Foundation/Foundation.h>


@interface MRSharedSettings : NSObject

@property (readonly, nonatomic) BOOL canHostMultiplayerStream;
@property (readonly, nonatomic, getter=isMultiplayerAware) BOOL multiplayerAware;
@property (readonly, nonatomic, getter=isMultiplayerHost) BOOL multiplayerHost;
@property (readonly, nonatomic) BOOL supportNowPlayingSessionDataSource;


+(id)currentSettings;


@end


#endif