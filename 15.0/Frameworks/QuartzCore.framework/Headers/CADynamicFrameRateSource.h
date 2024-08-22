// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CADYNAMICFRAMERATESOURCE_H
#define CADYNAMICFRAMERATESOURCE_H


#import <Foundation/Foundation.h>


@interface CADynamicFrameRateSource : NSObject {
    *DynamicFrameRateSource _impl;
}


@property (nonatomic, getter=isPaused) BOOL paused;
@property (nonatomic) CAFrameRateRange preferredFrameRateRange;


-(BOOL)shiftFramePhaseBy:(CGFloat)arg0 ;
-(CGFloat)commitDeadline;
-(CGFloat)commitDeadlineAfterTimestamp:(CGFloat)arg0 ;
-(id)initWithDisplay:(id)arg0 ;
-(void)dealloc;
-(void)setHighFrameRateReasons:(*unsigned int)arg0 count:(NSUInteger)arg1 ;


@end


#endif