// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASODISMISSREMOTEOVERLAYOPERATION_H
#define ASODISMISSREMOTEOVERLAYOPERATION_H

@class NSOperation;
@protocol ASORemoteContextProvider;



@interface ASODismissRemoteOverlayOperation : NSOperation

@property (weak, nonatomic) NSObject<ASORemoteContextProvider> *contextProvider; // ivar: _contextProvider
@property BOOL isExecuting; // ivar: _isExecuting
@property BOOL isFinished; // ivar: _isFinished


-(id)initWithContextProvider:(id)arg0 ;
-(void)cancel;
-(void)finishExecuting;
-(void)start;


@end


#endif