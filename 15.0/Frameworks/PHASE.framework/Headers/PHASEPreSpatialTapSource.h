// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PHASEPRESPATIALTAPSOURCE_H
#define PHASEPRESPATIALTAPSOURCE_H

@class AVAudioFormat, NSString;

#import <Foundation/Foundation.h>

#import "PHASEEngine.h"

@interface PHASEPreSpatialTapSource : NSObject {
    PHASEEngine *_weakEngine;
}


@property (readonly, copy, nonatomic) AVAudioFormat *format; // ivar: _format
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier


+(id)new;
-(id)init;
-(id)initWithEngine:(id)arg0 description:(id)arg1 ;
-(id)initWithEngine:(id)arg0 identifier:(id)arg1 ;
-(void)addMixer:(id)arg0 ;
-(void)addSource:(id)arg0 ;
-(void)addSubmixId:(struct UniqueObjectId )arg0 ;
-(void)dealloc;
-(void)removeMixer:(id)arg0 ;
-(void)removeSource:(id)arg0 ;
-(void)removeSubmixId:(struct UniqueObjectId )arg0 ;


@end


#endif