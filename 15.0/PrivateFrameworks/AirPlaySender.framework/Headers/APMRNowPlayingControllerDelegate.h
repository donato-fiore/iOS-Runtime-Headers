// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef APMRNOWPLAYINGCONTROLLERDELEGATE_H
#define APMRNOWPLAYINGCONTROLLERDELEGATE_H

@class MRNowPlayingController, NSString;
@protocol MRNowPlayingControllerDelegate;

#import <Foundation/Foundation.h>


@interface APMRNowPlayingControllerDelegate : NSObject <MRNowPlayingControllerDelegate>

 {
    ? _metadataSource;
    MRNowPlayingController *_nowPlayingController;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithMetadataSource:(struct OpaqueAPMetadataSource *)arg0 ;
-(void)controller:(id)arg0 clientPropertiesDidChangeFrom:(id)arg1 to:(id)arg2 ;
-(void)controller:(id)arg0 contentItemsDidUpdateWithContentItemChanges:(id)arg1 ;
-(void)controller:(id)arg0 didLoadArtworkForContentItems:(id)arg1 ;
-(void)controller:(id)arg0 didLoadResponse:(id)arg1 ;
-(void)controller:(id)arg0 playbackQueueDidChangeFrom:(id)arg1 to:(id)arg2 ;
-(void)controller:(id)arg0 playbackStateDidChangeFrom:(unsigned int)arg1 to:(unsigned int)arg2 ;
-(void)controller:(id)arg0 playerPathDidChange:(id)arg1 ;
-(void)controller:(id)arg0 supportedCommandsDidChangeFrom:(id)arg1 to:(id)arg2 ;
-(void)dealloc;
-(void)flushMetadata;
-(void)notifyContentItemUpdates:(id)arg0 ;
-(void)notifyNewContentItems:(id)arg0 ;
-(void)notifyNewNowPlayingClient:(id)arg0 ;
-(void)notifyNewPlaybackState:(unsigned int)arg0 ;
-(void)notifyNewProxiableSupportedCommands:(id)arg0 ;
-(void)start;
-(void)stop;


@end


#endif