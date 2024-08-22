// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CAMPROMINENTOBJECTMANAGER_H
#define CAMPROMINENTOBJECTMANAGER_H

@class BCSDetectedCode, BCSAction;
@protocol CAMMetadataObjectResult, CAMProminentObjectManagerDelegate;

#import <Foundation/Foundation.h>


@interface CAMProminentObjectManager : NSObject {
    id<CAMMetadataObjectResult> *_currentObject;
    CGPoint _currentObjectPointOfInterest;
    id<CAMMetadataObjectResult> *_expiringObject;
    id<CAMMetadataObjectResult> *_candidateObject;
    CGFloat _candidateTimestamp;
    BCSDetectedCode *_currentlyParsingCode;
    BCSAction *_previousAction;
    BCSAction *_currentAction;
}


@property (readonly, nonatomic) BCSAction *currentMachineReadableCodeAction;
@property (readonly, nonatomic) NSObject<CAMMetadataObjectResult> *currentObject;
@property (readonly, nonatomic, getter=isCurrentObjectExpiring) BOOL currentObjectExpiring;
@property (readonly, nonatomic) NSUInteger currentObjectType;
@property (weak, nonatomic) NSObject<CAMProminentObjectManagerDelegate> *delegate; // ivar: _delegate
@property (nonatomic) NSInteger viewportAspectRatio; // ivar: _viewportAspectRatio


-(BOOL)_isMetadataObject:(id)arg0 semanticallyEqualToMetadataObject:(id)arg1 ;
-(BOOL)_isPoint:(struct CGPoint )arg0 equalToPoint:(struct CGPoint )arg1 tolerance:(CGFloat)arg2 ;
-(BOOL)isCurrentObjectLikelyEqualToObject:(id)arg0 ;
-(CGFloat)_expirationTimeForObjectType:(NSUInteger)arg0 ;
-(NSUInteger)typeForMetadataObject:(id)arg0 ;
-(id)_candidateObjectMatchingCurrentObject:(id)arg0 ;
-(id)_mostSignificantObjectFromObjects:(id)arg0 preferredObject:(id)arg1 pointOfInterest:(struct CGPoint )arg2 ;
-(id)init;
-(struct CGRect )_referenceBoundsForAspectRatio:(NSInteger)arg0 ;
-(void)_beginExpiringCurrentObjectIfNeeded;
-(void)_handleExpiredObject:(id)arg0 ;
-(void)_updateCurrentMRCActionWhenReady;
-(void)reset;
-(void)updateWithCandidateObjects:(id)arg0 ;


@end


#endif