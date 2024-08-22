// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IKJSPLAYLISTENDACTION_H
#define IKJSPLAYLISTENDACTION_H

@protocol IKJSPlaylistEndAction;


#import "IKJSObject.h"

@interface IKJSPlaylistEndAction : IKJSObject <IKJSPlaylistEndAction>



@property (readonly) NSInteger PAUSE;
@property (readonly) NSInteger STOP;
@property (readonly) NSInteger WAIT_FOR_MORE_ITEMS;


-(id)init;


@end


#endif