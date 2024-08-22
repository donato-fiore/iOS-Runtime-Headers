// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NISESSIONVISIONCONTEXT_H
#define NISESSIONVISIONCONTEXT_H

@class ARSession, ARFrame;

#import <Foundation/Foundation.h>


@interface NISessionVisionContext : NSObject

@property (retain, nonatomic) ARSession *arSession; // ivar: _arSession
@property (nonatomic, getter=isARSessionInternal) BOOL arSessionInternal; // ivar: _arSessionInternal
@property (nonatomic) NSUInteger arSessionState; // ivar: _arSessionState
@property (nonatomic, getter=isCameraAssistanceEnabled) BOOL cameraAssistanceEnabled; // ivar: _cameraAssistanceEnabled
@property (copy, nonatomic) ARFrame *latestARFrame; // ivar: _latestARFrame


-(id)init;


@end


#endif