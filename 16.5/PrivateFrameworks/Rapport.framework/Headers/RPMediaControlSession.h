// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RPMEDIACONTROLSESSION_H
#define RPMEDIACONTROLSESSION_H

@protocol OS_dispatch_queue, RPMessageable;

#import <Foundation/Foundation.h>


@interface RPMediaControlSession : NSObject {
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    BOOL _invalidateCalled;
    BOOL _registeredMediaControlInterest;
}


@property (readonly, nonatomic) NSUInteger mediaControlFlags; // ivar: _mediaControlFlags
@property (copy, nonatomic) id *mediaControlFlagsChangedHandler; // ivar: _mediaControlFlagsChangedHandler
@property (retain, nonatomic) NSObject<RPMessageable> *messenger; // ivar: _messenger


-(id)init;
-(void)_activateWithCompletion:(id)arg0 ;
-(void)_handleMediaControlEvent:(id)arg0 ;
-(void)_invalidate;
-(void)activateWithCompletion:(id)arg0 ;
-(void)invalidate;
-(void)mediaCaptionSettingGetFromDestinationID:(id)arg0 completion:(id)arg1 ;
-(void)mediaCaptionSettingSet:(int)arg0 destinationID:(id)arg1 completion:(id)arg2 ;
-(void)mediaCommand:(int)arg0 destinationID:(id)arg1 completion:(id)arg2 ;
-(void)mediaGetVolumeFromDestinationID:(id)arg0 completion:(id)arg1 ;
-(void)mediaSetVolume:(CGFloat)arg0 destinationID:(id)arg1 completion:(id)arg2 ;
-(void)mediaSkipBySeconds:(CGFloat)arg0 destinationID:(id)arg1 completion:(id)arg2 ;


@end


#endif