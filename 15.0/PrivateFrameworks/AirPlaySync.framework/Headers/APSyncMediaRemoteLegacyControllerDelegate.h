// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef APSYNCMEDIAREMOTELEGACYCONTROLLERDELEGATE_H
#define APSYNCMEDIAREMOTELEGACYCONTROLLERDELEGATE_H

@class NSString;
@protocol MRLegacyControllerDelegate;

#import <Foundation/Foundation.h>


@interface APSyncMediaRemoteLegacyControllerDelegate : NSObject <MRLegacyControllerDelegate>

 {
    weak_ptr<apsync::APSyncMediaRemoteLegacyController> _weakCallbackContext;
    *unk _connectionStateDidChange;
    *unk _volumeControlAvailableDidChange;
    *unk _volumeDidChange;
    *unk _masterVolumeDidChange;
    *unk _endpointDescriptionDidChange;
    NSString *_ID;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithContextAndCallbacks:(*unk)arg0 volumeControlAvailableChanged:(*unk)arg1 volumeChanged:(*unk)arg2 masterVolumeChanged:(*unk)arg3 endpointDescriptionChanged:(*unk)arg4 weakCallbackContext:(struct weak_ptr<apsync::APSyncMediaRemoteLegacyController> )arg5 ID:(id)arg6 ;
-(int)addEndpointDescriptionChangedListener:(struct OpaqueFigEndpoint *)arg0 ;
-(int)removeEndpointDescriptionChangedListener:(struct OpaqueFigEndpoint *)arg0 ;
-(void)_endpointDescriptionChanged:(struct OpaqueFigEndpoint *)arg0 ;
-(void)dealloc;
-(void)legacyController:(id)arg0 masterVolumeDidChange:(float)arg1 ;
-(void)legacyController:(id)arg0 volumeControlAvailabilityDidChange:(BOOL)arg1 forOutputDevice:(id)arg2 ;
-(void)legacyController:(id)arg0 volumeDidChange:(float)arg1 forOutputDevice:(id)arg2 ;
-(void)legacyControllerConnectionDidConnect:(id)arg0 ;
-(void)legacyControllerConnectionDidDisconnect:(id)arg0 withError:(id)arg1 ;


@end


#endif