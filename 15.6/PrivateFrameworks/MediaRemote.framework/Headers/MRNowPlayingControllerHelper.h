// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MRNOWPLAYINGCONTROLLERHELPER_H
#define MRNOWPLAYINGCONTROLLERHELPER_H

@class NSString;
@protocol MRNowPlayingControllerDelegate;

#import <Foundation/Foundation.h>


@interface MRNowPlayingControllerHelper : NSObject <MRNowPlayingControllerDelegate>



@property (copy, nonatomic) id *clientPropertiesDidChange; // ivar: _clientPropertiesDidChange
@property (copy, nonatomic) id *contentItemsDidLoadArtwork; // ivar: _contentItemsDidLoadArtwork
@property (copy, nonatomic) id *contentItemsDidUpdate; // ivar: _contentItemsDidUpdate
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) id *didFailWithError; // ivar: _didFailWithError
@property (copy, nonatomic) id *didInvalidate; // ivar: _didInvalidate
@property (copy, nonatomic) id *didLoadResponse; // ivar: _didLoadResponse
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *playbackQueueDidChange; // ivar: _playbackQueueDidChange
@property (copy, nonatomic) id *playbackStateDidChange; // ivar: _playbackStateDidChange
@property (copy, nonatomic) id *playerLastPlayingDateDidChange; // ivar: _playerLastPlayingDateDidChange
@property (copy, nonatomic) id *playerPathDidChange; // ivar: _playerPathDidChange
@property (readonly) Class superclass;
@property (copy, nonatomic) id *supportedCommandsDidChange; // ivar: _supportedCommandsDidChange


-(void)controller:(id)arg0 clientPropertiesDidChangeFrom:(id)arg1 to:(id)arg2 ;
-(void)controller:(id)arg0 contentItemsDidUpdateWithContentItemChanges:(id)arg1 ;
-(void)controller:(id)arg0 didFailWithError:(id)arg1 ;
-(void)controller:(id)arg0 didLoadArtworkForContentItems:(id)arg1 ;
-(void)controller:(id)arg0 didLoadResponse:(id)arg1 ;
-(void)controller:(id)arg0 playbackQueueDidChangeFrom:(id)arg1 to:(id)arg2 ;
-(void)controller:(id)arg0 playbackStateDidChangeFrom:(unsigned int)arg1 to:(unsigned int)arg2 ;
-(void)controller:(id)arg0 playerLastPlayingDateDidChange:(id)arg1 ;
-(void)controller:(id)arg0 playerPathDidChange:(id)arg1 ;
-(void)controller:(id)arg0 supportedCommandsDidChangeFrom:(id)arg1 to:(id)arg2 ;
-(void)controllerWillReloadForInvalidation:(id)arg0 ;


@end


#endif