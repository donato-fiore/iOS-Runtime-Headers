// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _MPMUSICPLAYERQUEUEITEMSPROXY_H
#define _MPMUSICPLAYERQUEUEITEMSPROXY_H

@class NSArray;


#import "MPMusicPlayerApplicationController.h"

@interface _MPMusicPlayerQueueItemsProxy : NSArray

@property (readonly, weak, nonatomic) MPMusicPlayerApplicationController *controller; // ivar: _controller


-(NSUInteger)count;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithController:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)objectAtIndex:(NSUInteger)arg0 ;


@end


#endif