// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BWFACEDETECTIONNODE_H
#define BWFACEDETECTIONNODE_H

@class NSSet, NSDictionary, NSArray;


#import "BWFanOutNode.h"
#import "BWNodeOutput.h"

@interface BWFaceDetectionNode : BWFanOutNode {
    CGRect _rectOfInterest;
    os_unfair_lock_s _rectOfInterestLock;
    BOOL _metadataObjectOutputEnabled;
    BOOL _boxedMetadataOutputEnabled;
    NSSet *_enabledDetectedObjectTypes;
    int _lastObjectFaceCount;
    int _lastDetectedObjectsCount;
    unsigned int _localIDsForFaces_BE;
    unsigned int _localIDsForDetectedHumanBodies_BE;
    unsigned int _localIDsForDetectedCatBodies_BE;
    unsigned int _localIDsForDetectedDogBodies_BE;
    unsigned int _localIDsForDetectedSalientObjects_BE;
    NSDictionary *_detectionTimingInfoByBoxedOutput;
    unsigned int _localIDOfDetectedFace_BE;
    unsigned int _localIDOfDetectedFaceFaceID_BE;
    unsigned int _localIDOfDetectedFaceBounds_BE;
    unsigned int _localIDOfDetectedFaceRoll_BE;
    unsigned int _localIDOfDetectedFaceYaw_BE;
    *OpaqueCMBlockBuffer _emptyMetadataSampleData;
    ? _startMarkerBufferPTS;
    ? _prevBoxedFacePTS;
    ? _prevBoxedFaceDur;
    ? _prevBoxedNoFacePTS;
    int _lastBoxedFaceCount;
    unsigned int _recordCollectionAtomIdentifier_BE;
    unsigned int _collectionItemsAtomIdentifier_BE;
}


@property (readonly) NSArray *boxedMetadataOutputs; // ivar: _boxedMetadataOutputs
@property (readonly) BWNodeOutput *metadataObjectOutput; // ivar: _metadataObjectOutput


+(void)initialize;
-(BOOL)boxedMetadataOutputEnabled;
-(id)initWithObjectMetadataIdentifiers:(id)arg0 movieFileOutputMetadataIdentifierGroups:(id)arg1 ;
-(id)nodeSubType;
-(id)nodeType;
-(struct CGRect )rectOfInterest;
-(void)configurationWithID:(NSInteger)arg0 updatedFormat:(id)arg1 didBecomeLiveForInput:(id)arg2 ;
-(void)dealloc;
-(void)didReachEndOfDataForInput:(id)arg0 ;
-(void)didSelectFormat:(id)arg0 forInput:(id)arg1 ;
-(void)renderSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 forInput:(id)arg1 ;
-(void)setBoxedMetadataOutputEnabled:(BOOL)arg0 ;
-(void)setRectOfInterest:(struct CGRect )arg0 ;


@end


#endif