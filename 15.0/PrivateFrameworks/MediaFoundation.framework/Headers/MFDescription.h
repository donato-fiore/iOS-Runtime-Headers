// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MFDESCRIPTION_H
#define MFDESCRIPTION_H


#import <Foundation/Foundation.h>


@interface MFDescription : NSObject



+(id)forBufferState:(NSInteger)arg0 ;
+(id)forErrorResolution:(NSInteger)arg0 ;
+(id)forItemChangeSource:(NSInteger)arg0 ;
+(id)forItemRequestReason:(NSInteger)arg0 ;
+(id)forItemTransition:(NSInteger)arg0 ;
+(id)forPlaybackTimeChangeReason:(NSInteger)arg0 ;
+(id)forPlayerSpatializationFormat:(NSInteger)arg0 ;
+(id)forPlayerState:(NSInteger)arg0 ;
+(id)forReloadingReason:(NSInteger)arg0 ;
+(id)forUserActionSource:(NSInteger)arg0 ;
+(id)forUserActionType:(NSInteger)arg0 ;
-(id)init;


@end


#endif