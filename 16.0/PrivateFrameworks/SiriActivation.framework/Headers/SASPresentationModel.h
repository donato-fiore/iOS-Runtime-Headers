// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SASPRESENTATIONMODEL_H
#define SASPRESENTATIONMODEL_H

@class NSMutableArray, NSTimer;

#import <Foundation/Foundation.h>

#import "SASPresentationServer.h"
#import "SASPresentationState.h"

@interface SASPresentationModel : NSObject

@property (retain, nonatomic) NSMutableArray *enqueuedButtonEventCompletions; // ivar: _enqueuedButtonEventCompletions
@property (retain, nonatomic) NSTimer *pingTimer; // ivar: _pingTimer
@property (readonly, nonatomic) SASPresentationServer *presentationServer; // ivar: _presentationServer
@property (retain, nonatomic) SASPresentationState *presentationState; // ivar: _presentationState
@property (nonatomic) NSInteger requestState; // ivar: _requestState


-(id)initWithPresentationServer:(id)arg0 ;
-(void)flushEnqueuedButtonEventCompletions;


@end


#endif