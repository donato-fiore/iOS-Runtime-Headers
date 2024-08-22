// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVFIGASSETWRITERFINISHWRITINGASYNCOPERATION_H
#define AVFIGASSETWRITERFINISHWRITINGASYNCOPERATION_H

@class NSString;
@protocol AVAssetWriterFigAssetWriterNotificationHandlerDelegate;


#import "AVOperation.h"
#import "AVAssetWriterFigAssetWriterNotificationHandler.h"

@interface AVFigAssetWriterFinishWritingAsyncOperation : AVOperation <AVAssetWriterFigAssetWriterNotificationHandlerDelegate>

 {
    *OpaqueFigAssetWriter _figAssetWriter;
    AVAssetWriterFigAssetWriterNotificationHandler *_notificationHandler;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isAsynchronous;
-(id)init;
-(id)initWithFigAssetWriter:(struct OpaqueFigAssetWriter *)arg0 ;
-(void)cancel;
-(void)dealloc;
-(void)didEnterTerminalState;
-(void)didReceiveFigAssetWriterNotificationWithSuccess:(BOOL)arg0 error:(id)arg1 ;
-(void)start;


@end


#endif