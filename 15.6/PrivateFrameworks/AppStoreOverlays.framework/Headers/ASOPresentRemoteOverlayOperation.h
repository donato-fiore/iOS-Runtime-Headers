// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ASOPRESENTREMOTEOVERLAYOPERATION_H
#define ASOPRESENTREMOTEOVERLAYOPERATION_H

@class NSOperation;


#import "ASORemoteOverlay.h"

@interface ASOPresentRemoteOverlayOperation : NSOperation

@property BOOL isExecuting; // ivar: _isExecuting
@property BOOL isFinished; // ivar: _isFinished
@property (retain, nonatomic) ASORemoteOverlay *remoteOverlay; // ivar: _remoteOverlay


-(id)initWithRemoteOverlay:(id)arg0 ;
-(void)cancel;
-(void)finishExecuting;
-(void)start;


@end


#endif