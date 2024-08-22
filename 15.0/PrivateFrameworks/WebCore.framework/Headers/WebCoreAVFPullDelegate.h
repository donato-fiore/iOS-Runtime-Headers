// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WEBCOREAVFPULLDELEGATE_H
#define WEBCOREAVFPULLDELEGATE_H

@class NSString;
@protocol AVPlayerItemOutputPullDelegate;

#import <Foundation/Foundation.h>


@interface WebCoreAVFPullDelegate : NSObject <AVPlayerItemOutputPullDelegate>

 {
    WeakPtr<WebCore::MediaPlayerPrivateAVFoundationObjC, WTF::EmptyCounter> _player;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) *void semaphore; // ivar: m_semaphore
@property (readonly) Class superclass;


-(id)initWithPlayer:(*void)arg0 ;
-(void)outputMediaDataWillChange:(id)arg0 ;
-(void)outputSequenceWasFlushed:(id)arg0 ;


@end


#endif