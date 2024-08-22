// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSDFPSCOUNTER_H
#define TSDFPSCOUNTER_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface TSDFPSCounter : NSObject {
    NSMutableArray *_dateArray;
}




-(id)fpsGraphString;
-(id)fpsSummaryString;
-(id)init;
-(id)p_fpsSummaryStringIncludingGraph:(BOOL)arg0 ;
-(id)p_getFPSInfo:(BOOL)arg0 ;
-(void)addFrame;
-(void)addFrameAtDrawTime:(CGFloat)arg0 ;
-(void)addFrameAtDrawTime:(CGFloat)arg0 duration:(CGFloat)arg1 ;
-(void)dealloc;
-(void)reset;
-(void)writeFPSInfoToLog:(id)arg0 identifier:(id)arg1 type:(id)arg2 direction:(id)arg3 duration:(CGFloat)arg4 graphing:(BOOL)arg5 slide:(NSInteger)arg6 ;


@end


#endif