// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CANNEDAVSYNC_H
#define CANNEDAVSYNC_H


#import <Foundation/Foundation.h>


@interface CannedAVSync : NSObject

@property (nonatomic) CGFloat base; // ivar: _base
@property (nonatomic) CGFloat modulo; // ivar: _modulo


+(id)sharedCannedAVSync;
-(CGFloat)clampForTime:(CGFloat)arg0 ;
-(id)init;
-(void)addDrift:(CGFloat)arg0 ;
-(void)addStreamWithCount:(int)arg0 rate:(CGFloat)arg1 ;
-(void)clear;


@end


#endif