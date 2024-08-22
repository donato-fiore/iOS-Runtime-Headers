// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPCUSTOMDATAPLAYBACKQUEUE_H
#define MPCUSTOMDATAPLAYBACKQUEUE_H

@class NSData, NSString;


#import "MPRemotePlaybackQueue.h"

@interface MPCustomDataPlaybackQueue : MPRemotePlaybackQueue

@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) NSString *identifier;


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithIdentifier:(id)arg0 data:(id)arg1 ;


@end


#endif