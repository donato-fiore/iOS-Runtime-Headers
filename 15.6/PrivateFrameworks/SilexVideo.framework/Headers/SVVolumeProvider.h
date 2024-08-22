// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SVVOLUMEPROVIDER_H
#define SVVOLUMEPROVIDER_H

@class NSString, NSHashTable;
@protocol SVVolumeProviding, SVVolumeReporting;

#import <Foundation/Foundation.h>


@interface SVVolumeProvider : NSObject <SVVolumeProviding, SVVolumeReporting>

 {
    BOOL _muted;
    float _volume;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL muted;
@property (readonly, nonatomic) NSHashTable *observers; // ivar: _observers
@property (readonly) Class superclass;
@property (readonly, nonatomic) float volume;


-(id)initWithMuteState:(BOOL)arg0 volume:(float)arg1 ;
-(void)addVolumeObserver:(id)arg0 ;
-(void)removeVolumeObserver:(id)arg0 ;


@end


#endif