// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIPDFPAGERENDEROPERATION_H
#define UIPDFPAGERENDEROPERATION_H

@class NSOperation;


#import "UIPDFPageRenderJob.h"

@interface UIPDFPageRenderOperation : NSOperation {
    BOOL executing;
    BOOL finished;
}


@property (retain) UIPDFPageRenderJob *job; // ivar: _job


-(BOOL)isConcurrent;
-(BOOL)isExecuting;
-(BOOL)isFinished;
-(id)initWithJob:(id)arg0 ;
-(void)completeOperation;
-(void)dealloc;
-(void)main;
-(void)start;


@end


#endif