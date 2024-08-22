// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MIROAUTOLAYOUTCLIP_H
#define MIROAUTOLAYOUTCLIP_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "MiroAutoEditKenBurnsController.h"
#import "MultiUpClip.h"
#import "KonaClip.h"
#import "MiroAutoLayoutClip.h"
#import "AltClipCollection.h"

@interface MiroAutoLayoutClip : NSObject

@property (nonatomic) BOOL canSupportMultiUp; // ivar: _canSupportMultiUp
@property (nonatomic) BOOL canSupportPrecedingTransition; // ivar: _canSupportPrecedingTransition
@property (nonatomic) int clipType; // ivar: _clipType
@property (nonatomic) BOOL couldSupportNUpBase; // ivar: _couldSupportNUpBase
@property (nonatomic) int directionOfMovement; // ivar: _directionOfMovement
@property (nonatomic) BOOL durationIsFlexible; // ivar: _durationIsFlexible
@property (readonly, nonatomic) BOOL facesAreClose; // ivar: _facesAreClose
@property (readonly, nonatomic) BOOL isPortrait; // ivar: _isPortrait
@property (readonly, nonatomic) BOOL isSquare; // ivar: _isSquare
@property (nonatomic) BOOL itemShouldHeroFeaturedPerson; // ivar: _itemShouldHeroFeaturedPerson
@property (retain, nonatomic) MiroAutoEditKenBurnsController *kbController; // ivar: _kbController
@property (nonatomic) BOOL missedRollToBeats; // ivar: _missedRollToBeats
@property (retain, nonatomic) MultiUpClip *multiUpClip; // ivar: _multiUpClip
@property (retain, nonatomic) NSArray *multiUpPeers; // ivar: _multiUpPeers
@property (readonly, nonatomic) int numberOfFaces; // ivar: _numberOfFaces
@property (nonatomic) int preferredDirection; // ivar: _preferredDirection
@property (retain, nonatomic) KonaClip *projectClip; // ivar: _projectClip
@property (retain, nonatomic) MiroAutoLayoutClip *selectedPeer; // ivar: _selectedPeer
@property (nonatomic) BOOL supportsHalf; // ivar: _supportsHalf
@property (nonatomic) BOOL supportsOneThird; // ivar: _supportsOneThird
@property (nonatomic) BOOL supportsTwoThirds; // ivar: _supportsTwoThirds
@property (nonatomic) BOOL transitionAssigned; // ivar: _transitionAssigned
@property (retain, nonatomic) AltClipCollection *treatmentInfo; // ivar: _treatmentInfo
@property (nonatomic) BOOL zoomToPersonCandidate; // ivar: _zoomToPersonCandidate


+(BOOL)clipIsPano:(id)arg0 ;
+(BOOL)clipIsPortrait:(id)arg0 ;
+(BOOL)clipIsPortraitOrSquare:(id)arg0 ;
+(BOOL)clipIsSquare:(id)arg0 ;
+(CGFloat)clipAspectRatio:(id)arg0 ;
-(BOOL)clipCanZoomCrop:(id)arg0 ;
-(BOOL)hasMultipleFaces;
-(BOOL)isEdited;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isFavorite;
-(BOOL)isPano;
-(BOOL)isTransition;
-(BOOL)isVideo;
-(CGFloat)distanceToLayoutClip:(id)arg0 ;
-(id)description;
-(id)initWithKonaClip:(id)arg0 polishDelegate:(id)arg1 zoomToPersonCandidate:(BOOL)arg2 isTitle:(BOOL)arg3 ;
-(id)locationForClip;
-(int)establishRequiredTreatmentForAspect:(CGFloat)arg0 polishDelegate:(id)arg1 ;
-(void)applyAssignedTreatmentsFromRequired;
-(void)establishCanSupportPrecedingTransition;
-(void)establishDurationFlexibility;
-(void)establishFaceInfo:(id)arg0 ;
-(void)establishFacesAreClose;
-(void)establishIsPortrait;
-(void)establishIsSquare;
-(void)establishPreferredDirection;
-(void)establishProjectClipType;


@end


#endif