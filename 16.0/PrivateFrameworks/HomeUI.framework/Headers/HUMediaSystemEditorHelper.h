// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUMEDIASYSTEMEDITORHELPER_H
#define HUMEDIASYSTEMEDITORHELPER_H

@class NAFuture, HFMediaSystemBuilder;
@protocol HUMediaSystemEditorHelperDelegate;

#import <Foundation/Foundation.h>


@interface HUMediaSystemEditorHelper : NSObject

@property (retain, nonatomic) NAFuture *accountArbitrationFuture; // ivar: _accountArbitrationFuture
@property (weak, nonatomic) NSObject<HUMediaSystemEditorHelperDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NAFuture *inFlightCommitFuture; // ivar: _inFlightCommitFuture
@property (readonly, nonatomic) HFMediaSystemBuilder *mediaSystemBuilder;


-(id)_authKitContextGenerator:(SEL)arg0 ;
-(id)_checkIfAccessoriesNeedSoftwareUpdateToSupportPairing;
-(id)_executeAppleMusicAccountReconcilationForMediaSystemBuilder:(id)arg0 ;
-(id)_executePreferredMediaUserReconcilationForMediaSystemBuilder:(id)arg0 ;
-(id)_promptForRoomChange;
-(id)createMediaSystem;
-(id)createMediaSystemWithAccessory:(id)arg0 ;
-(id)initWithDelegate:(id)arg0 ;
-(void)_configureMediaSystemBuilderToMoveHomePodsToRoom:(id)arg0 ;


@end


#endif