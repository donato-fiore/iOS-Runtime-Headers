// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WEBQUEUEDVIDEOOUTPUTDELEGATE_H
#define WEBQUEUEDVIDEOOUTPUTDELEGATE_H

@class NSString;
@protocol AVPlayerItemOutputPullDelegate;

#import <Foundation/Foundation.h>


@interface WebQueuedVideoOutputDelegate : NSObject <AVPlayerItemOutputPullDelegate>

 {
    WeakPtr<WebCore::QueuedVideoOutput, WTF::EmptyCounter> _parent;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithParent:(*void)arg0 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)outputMediaDataWillChange:(id)arg0 ;
-(void)outputSequenceWasFlushed:(id)arg0 ;


@end


#endif