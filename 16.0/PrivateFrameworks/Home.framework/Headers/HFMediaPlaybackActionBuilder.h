// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HFMEDIAPLAYBACKACTIONBUILDER_H
#define HFMEDIAPLAYBACKACTIONBUILDER_H

@class NSSet, HMMediaPlaybackAction, NSString, NSNumber;


#import "HFActionBuilder.h"
#import "HFPlaybackArchive.h"

@interface HFMediaPlaybackActionBuilder : HFActionBuilder

@property (copy, nonatomic) NSSet *accessories; // ivar: _accessories
@property (readonly, nonatomic) HMMediaPlaybackAction *action;
@property (readonly, copy, nonatomic) NSString *localizedDescription;
@property (copy, nonatomic) NSSet *mediaProfiles; // ivar: _mediaProfiles
@property (retain, nonatomic) HFPlaybackArchive *playbackArchive; // ivar: _playbackArchive
@property (nonatomic) NSInteger targetPlayState; // ivar: _targetPlayState
@property (retain, nonatomic) NSNumber *targetVolume; // ivar: _targetVolume


+(Class)homeKitRepresentationClass;
-(BOOL)canUpdateWithActionBuilder:(id)arg0 ;
-(BOOL)hasSameTargetAsAction:(id)arg0 ;
-(BOOL)isAffectedByEndEvents;
-(BOOL)isMediaActionValid:(*id)arg0 ;
-(BOOL)requiresDeviceUnlock;
-(BOOL)updateWithActionBuilder:(id)arg0 ;
-(id)commitItem;
-(id)compareToObject:(id)arg0 ;
-(id)containedAccessoryRepresentables;
-(id)copyForCreatingNewAction;
-(id)createNewAction;
-(id)description;
-(id)initWithExistingObject:(id)arg0 inHome:(id)arg1 ;
-(id)mediaProfileContainersForAccessories:(id)arg0 home:(id)arg1 ;
-(id)performValidation;
-(void)_ensureConsistency;
-(void)defaultActionIfMediaActionInvalid;


@end


#endif