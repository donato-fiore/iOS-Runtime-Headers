// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVVOLUMEHUDASSERTION_H
#define AVVOLUMEHUDASSERTION_H

@class NSString, UIWindowScene;
@protocol MPVolumeDisplaying, AVVolumeHUDAssertionDelegate;

#import <Foundation/Foundation.h>


@interface AVVolumeHUDAssertion : NSObject <MPVolumeDisplaying>



@property (readonly, nonatomic) NSString *clientIdentifier; // ivar: _clientIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<AVVolumeHUDAssertionDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isOnScreen) BOOL onScreen;
@property (readonly, nonatomic, getter=isOnScreenForVolumeDisplay) BOOL onScreenForVolumeDisplay;
@property (nonatomic) BOOL prefersSystemVolumeHUDHidden; // ivar: _prefersSystemVolumeHUDHidden
@property (readonly, nonatomic) NSString *sceneIdentifier; // ivar: _sceneIdentifier
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *volumeAudioCategory;
@property (readonly, nonatomic) UIWindowScene *windowSceneForVolumeDisplay;


-(BOOL)isEqual:(id)arg0 ;
-(id)_systemController;
-(id)initWithSceneIdentifier:(id)arg0 clientIdentifier:(id)arg1 ;


@end


#endif