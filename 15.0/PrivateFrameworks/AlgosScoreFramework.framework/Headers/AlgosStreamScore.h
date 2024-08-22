// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ALGOSSTREAMSCORE_H
#define ALGOSSTREAMSCORE_H


#import <Foundation/Foundation.h>


@interface AlgosStreamScore : NSObject {
    *void streamData;
    CGFloat logisticScale;
}


@property (nonatomic) BOOL debug; // ivar: _debug
@property (nonatomic) BOOL enforceStreamEnd; // ivar: _enforceStreamEnd
@property (nonatomic) BOOL music; // ivar: _music


+(id)streamScore;
-(BOOL)restoreEventsFromFile:(id)arg0 clear:(BOOL)arg1 ;
-(BOOL)saveEventsToFile:(id)arg0 ;
-(CGFloat)findTotalTime:(id)arg0 debug:(BOOL)arg1 ;
-(id)init;
-(id)scoreStreaming:(id)arg0 ;
-(void)addRawStreamEvent:(int)arg0 start:(CGFloat)arg1 end:(CGFloat)arg2 weight:(CGFloat)arg3 quality:(CGFloat)arg4 params:(id)arg5 ;
-(void)addStreamEnd:(CGFloat)arg0 ;
-(void)addStreamFailure:(CGFloat)arg0 weight:(CGFloat)arg1 ;
-(void)addStreamPenalty:(CGFloat)arg0 amount:(CGFloat)arg1 ;
-(void)addStreamStall:(CGFloat)arg0 end:(CGFloat)arg1 quality:(CGFloat)arg2 weight:(CGFloat)arg3 ;
-(void)addStreamStall:(CGFloat)arg0 end:(CGFloat)arg1 quality:(CGFloat)arg2 weight:(CGFloat)arg3 params:(id)arg4 ;
-(void)addStreamStart:(CGFloat)arg0 play:(CGFloat)arg1 ;
-(void)addStreamStartupStall:(CGFloat)arg0 end:(CGFloat)arg1 quality:(CGFloat)arg2 weight:(CGFloat)arg3 ;
-(void)addStreamTierSwitch:(CGFloat)arg0 end:(CGFloat)arg1 quality:(CGFloat)arg2 weight:(CGFloat)arg3 ;
-(void)clearStreamRows;
-(void)dealloc;


@end


#endif