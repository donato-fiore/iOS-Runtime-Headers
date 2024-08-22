// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IKJSPLAYERMEDIAITEMCHANGEREASON_H
#define IKJSPLAYERMEDIAITEMCHANGEREASON_H

@protocol IKJSPlayerMediaItemChangeReason;


#import "IKJSObject.h"

@interface IKJSPlayerMediaItemChangeReason : IKJSObject <IKJSPlayerMediaItemChangeReason>



@property (readonly) NSInteger ERRORED;
@property (readonly) NSInteger FORWARDED_TO_END;
@property (readonly) NSInteger PLAYED_TO_END;
@property (readonly) NSInteger PLAYLIST_CHANGED;
@property (readonly) NSInteger UNKNOWN;
@property (readonly) NSInteger USER_INITIATED;


-(id)init;


@end


#endif