// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef XRFRAMECOMMUTATOR_H
#define XRFRAMECOMMUTATOR_H


#import <Foundation/Foundation.h>


@interface XRFrameCommutator : NSObject {
    unique_ptr<xray::scheduler::Commutator, std::default_delete<xray::scheduler::Commutator>> _commutatorImpl;
}




+(id)sharedCommutator;
-(id)init;
-(id)initWithMinorFrameCount:(unsigned char)arg0 ;
-(id)newRing;
-(void)addRing:(id)arg0 ;
-(void)dealloc;
-(void)observedTopOfMajorFrame;
-(void)removeRing:(id)arg0 ;
-(void)setPeriod:(NSUInteger)arg0 ;
-(void)start;
-(void)stop;


@end


#endif