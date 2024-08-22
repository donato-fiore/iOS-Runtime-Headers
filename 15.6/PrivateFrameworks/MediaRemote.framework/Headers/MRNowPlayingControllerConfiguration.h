// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MRNOWPLAYINGCONTROLLERCONFIGURATION_H
#define MRNOWPLAYINGCONTROLLERCONFIGURATION_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "MRDestination.h"
#import "MRPlaybackQueueRequest.h"

@interface MRNowPlayingControllerConfiguration : NSObject <NSCopying>



@property (copy, nonatomic) MRDestination *destination; // ivar: _destination
@property (retain, nonatomic) NSString *label; // ivar: _label
@property (copy, nonatomic) MRPlaybackQueueRequest *playbackQueueRequest; // ivar: _playbackQueueRequest
@property (nonatomic) BOOL requestClientProperties; // ivar: _requestClientProperties
@property (nonatomic) BOOL requestLastPlayingDate; // ivar: _requestLastPlayingDate
@property (nonatomic) BOOL requestPlaybackQueue; // ivar: _requestPlaybackQueue
@property (nonatomic) BOOL requestPlaybackState; // ivar: _requestPlaybackState
@property (nonatomic) BOOL requestSupportedCommands; // ivar: _requestSupportedCommands
@property (nonatomic, getter=isSingleShot) BOOL singleShot; // ivar: _singleShot


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)description;
-(id)initWithDestination:(id)arg0 ;
-(id)initWithEndpoint:(id)arg0 ;
-(id)initWithOrigin:(id)arg0 ;
-(id)initWithOutputDeviceUID:(id)arg0 ;


@end


#endif