// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CMKAPPA_H
#define CMKAPPA_H


#import <Foundation/Foundation.h>

#import "CMKappaInternal.h"

@interface CMKappa : NSObject

@property (readonly, nonatomic) CMKappaInternal *_internal; // ivar: _internal


+(BOOL)areStatsAvailable;
-(id)init;
-(id)sendStatsDataToUrl:(id)arg0 ;
-(int)getState;
-(void)dealloc;
-(void)sendAPCmd:(int)arg0 ;
-(void)sendAPConfigNumFastAccel:(int)arg0 numAccel:(int)arg1 numPressure:(int)arg2 numDM:(int)arg3 numMag:(int)arg4 numAudio:(int)arg5 timeout:(int)arg6 ;
-(void)sendCmd:(int)arg0 ;
-(void)sendConfigNumFastAccel:(int)arg0 numAccel:(int)arg1 numPressure:(int)arg2 numDM:(int)arg3 numMag:(int)arg4 numAudio:(int)arg5 timeout:(int)arg6 ;
-(void)sendStatsDataToUrl:(id)arg0 onCompletion:(id)arg1 ;
-(void)startKappaUpdatesForItem:(NSInteger)arg0 withHandler:(id)arg1 ;
-(void)stopKappaUpdates;


@end


#endif