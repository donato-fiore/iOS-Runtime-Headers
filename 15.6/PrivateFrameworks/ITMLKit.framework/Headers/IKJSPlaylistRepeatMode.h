// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IKJSPLAYLISTREPEATMODE_H
#define IKJSPLAYLISTREPEATMODE_H

@protocol IKJSPlaylistRepeatMode;


#import "IKJSObject.h"

@interface IKJSPlaylistRepeatMode : IKJSObject <IKJSPlaylistRepeatMode>



@property (readonly) NSInteger ALL;
@property (readonly) NSInteger NONE;
@property (readonly) NSInteger ONE;


-(id)init;


@end


#endif