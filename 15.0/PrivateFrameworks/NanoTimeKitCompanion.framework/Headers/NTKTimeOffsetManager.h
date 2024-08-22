// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTKTIMEOFFSETMANAGER_H
#define NTKTIMEOFFSETMANAGER_H


#import <Foundation/Foundation.h>


@interface NTKTimeOffsetManager : NSObject

@property (nonatomic) CGFloat timeOffset; // ivar: _timeOffset


+(id)sharedManager;
-(id)displayTimeForRealTime:(id)arg0 ;
-(id)faceDisplayTime;
-(id)init;
-(void)_handleFaceDefaultsChanged;
-(void)_handleFaceLibraryReloaded;
-(void)_loadTimeOffset;
-(void)_updateTimeOffset:(BOOL)arg0 ;
-(void)dealloc;
-(void)forceUpdateTimeOffset;


@end


#endif