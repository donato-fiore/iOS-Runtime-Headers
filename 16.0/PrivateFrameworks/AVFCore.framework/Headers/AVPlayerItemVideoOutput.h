// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVPLAYERITEMVIDEOOUTPUT_H
#define AVPLAYERITEMVIDEOOUTPUT_H

@protocol AVPlayerItemOutputPullDelegate, OS_dispatch_queue;


#import "AVPlayerItemOutput.h"
#import "AVPlayerItemVideoOutputInternal.h"

@interface AVPlayerItemVideoOutput : AVPlayerItemOutput {
    AVPlayerItemVideoOutputInternal *_videoOutputInternal;
}


@property (readonly, weak) NSObject<AVPlayerItemOutputPullDelegate> *delegate;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;


-(BOOL)_attachToPlayerItem:(id)arg0 ;
-(BOOL)hasNewPixelBufferForItemTime:(struct ? )arg0 ;
-(BOOL)setUpWithOutputSettings:(id)arg0 outputSettingsArePixelBufferAttributes:(BOOL)arg1 withExceptionReason:(*id)arg2 ;
-(BOOL)suppressesPlayerRendering;
-(NSInteger)clientStateOnRequestedMediaDataChangeNotification;
-(id)_pixelBufferAttributes;
-(id)init;
-(id)initWithOutputSettings:(id)arg0 ;
-(id)initWithPixelBufferAttributes:(id)arg0 ;
-(struct ? )earliestAvailablePixelBufferItemTime;
-(struct OpaqueFigVisualContext *)_visualContext;
-(struct __CVBuffer *)_copyPixelBufferForItemTimeWithOptions:(struct ? )arg0 itemTimeForDisplay:(struct ? *)arg1 options:(unsigned int)arg2 ;
-(struct __CVBuffer *)copyPixelBufferForItemTime:(struct ? )arg0 itemTimeForDisplay:(struct ? *)arg1 ;
-(struct __CVBuffer *)copyPixelBufferForItemTime:(struct ? )arg0 remove:(BOOL)arg1 itemTimeForDisplay:(struct ? *)arg2 ;
-(void)_detachFromPlayerItem;
-(void)_dispatchOutputMediaDataWillChange;
-(void)_dispatchOutputSequenceWasFlushed;
-(void)_respondToPlayerItemFormatDescriptionsChange;
-(void)_setTagBuffersWithConversionInformation;
-(void)_setTimebase:(struct OpaqueCMTimebase *)arg0 ;
-(void)_startObservingTimebaseNotificationsForTimebase:(struct OpaqueCMTimebase *)arg0 ;
-(void)_stopObservingTimebaseNotificationsForTimebase:(struct OpaqueCMTimebase *)arg0 ;
-(void)dealloc;
-(void)requestNotificationOfMediaDataChangeAsSoonAsPossible;
-(void)requestNotificationOfMediaDataChangeWithAdvanceInterval:(CGFloat)arg0 ;
-(void)setSuppressesPlayerRendering:(BOOL)arg0 ;


@end


#endif