// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTCC10REALITYKIT10RKARSYSTEMP33_7C42569567E429B6AB2725E2C535D52915SESSIONDELEGATE_H
#define _TTCC10REALITYKIT10RKARSYSTEMP33_7C42569567E429B6AB2725E2C535D52915SESSIONDELEGATE_H

@protocol ARInternalSessionObserver;

#import <Foundation/Foundation.h>


@interface _TtCC10RealityKit10RKARSystemP33_7C42569567E429B6AB2725E2C535D52915SessionDelegate : NSObject <ARInternalSessionObserver>

 {
    ? system;
}




-(id)init;
-(void)session:(id)arg0 didAddAnchors:(id)arg1 ;
-(void)session:(id)arg0 didOutputCollaborationData:(id)arg1 ;
-(void)session:(id)arg0 didRemoveAnchors:(id)arg1 ;
-(void)session:(id)arg0 didUpdateAnchors:(id)arg1 ;
-(void)session:(id)arg0 didUpdateFrame:(id)arg1 ;
-(void)session:(id)arg0 requestedRunWithConfiguration:(id)arg1 options:(NSUInteger)arg2 ;


@end


#endif