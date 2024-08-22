// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MRNOWPLAYINGPLAYERRESPONSE_H
#define MRNOWPLAYINGPLAYERRESPONSE_H

@class NSDate, NSArray;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "MRClient.h"
#import "MRPlaybackQueue.h"
#import "MRPlayerPath.h"

@interface MRNowPlayingPlayerResponse : NSObject <NSCopying, NSSecureCoding>



@property (retain, nonatomic) MRClient *clientProperties; // ivar: _clientProperties
@property (readonly, nonatomic) BOOL deviceHasPlayedRecently;
@property (copy, nonatomic) NSDate *deviceLastPlayingDate; // ivar: _deviceLastPlayingDate
@property (readonly, nonatomic) BOOL hasPlayedRecently;
@property (readonly, nonatomic) NSDate *lastPlayingDate;
@property (copy, nonatomic) MRPlaybackQueue *playbackQueue; // ivar: _playbackQueue
@property (nonatomic) unsigned int playbackState; // ivar: _playbackState
@property (readonly, nonatomic) BOOL playerHasPlayedRecently;
@property (copy, nonatomic) NSDate *playerLastPlayingDate; // ivar: _playerLastPlayingDate
@property (copy, nonatomic) MRPlayerPath *playerPath; // ivar: _playerPath
@property (readonly, copy, nonatomic) NSArray *proxiableSupportedCommands;
@property (copy, nonatomic) NSArray *supportedCommands; // ivar: _supportedCommands


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)debugDictionaryRepresentation;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif