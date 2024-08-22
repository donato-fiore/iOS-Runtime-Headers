// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HFPLAYBACKEVENTSDATA_H
#define HFPLAYBACKEVENTSDATA_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface HFPlaybackEventsData : NSObject {
    os_unfair_lock_s _lock;
}


@property (retain, nonatomic) NSArray *cameraClips; // ivar: _cameraClips
@property (retain, nonatomic) NSArray *cameraEvents; // ivar: _cameraEvents


-(id)init;
-(void)updateData:(id)arg0 cameraClips:(id)arg1 ;


@end


#endif