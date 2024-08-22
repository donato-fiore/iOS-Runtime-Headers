// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MUPLACEHOLDERGRIDCACHE_H
#define MUPLACEHOLDERGRIDCACHE_H

@class MKMapSnapshotter, UIImage;

#import <Foundation/Foundation.h>


@interface MUPlaceholderGridCache : NSObject {
    os_unfair_lock_s _lock;
    os_unfair_lock_s _snapshotterLock;
    MKMapSnapshotter *_lightSnapshotter;
    MKMapSnapshotter *_darkSnapshotter;
}


@property (readonly, nonatomic) UIImage *darkGrid; // ivar: _darkGrid
@property (readonly, nonatomic) UIImage *lightGrid; // ivar: _lightGrid


+(id)unretainedInstance;
-(id)init;
-(void)_cancelSnapshots;
-(void)_saveDarkGrid:(id)arg0 ;
-(void)_saveLightGrid:(id)arg0 ;
-(void)loadPlaceholderGridImages;


@end


#endif