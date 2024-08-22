// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _NACAUDIOROUTESRECORD_H
#define _NACAUDIOROUTESRECORD_H

@class NSArray, NSMutableSet;

#import <Foundation/Foundation.h>


@interface _NACAudioRoutesRecord : NSObject

@property (retain, nonatomic) NSArray *audioRoutes; // ivar: _audioRoutes
@property (retain, nonatomic) NSArray *deferredAudioRoutes; // ivar: _deferredAudioRoutes
@property (retain, nonatomic) NSMutableSet *observers; // ivar: _observers
@property (nonatomic) CGFloat timestamp; // ivar: _timestamp




@end


#endif