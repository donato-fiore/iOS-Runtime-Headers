// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SXVOLUMEPROVIDER_H
#define SXVOLUMEPROVIDER_H

@class NSString, NSHashTable;
@protocol SXVolumeProviding, SXVolumeReporting;

#import <Foundation/Foundation.h>


@interface SXVolumeProvider : NSObject <SXVolumeProviding, SXVolumeReporting>

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