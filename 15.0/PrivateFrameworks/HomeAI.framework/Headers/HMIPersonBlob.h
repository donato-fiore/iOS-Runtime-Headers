// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMIPERSONBLOB_H
#define HMIPERSONBLOB_H

@class HMFObject, NSUUID, NSMutableIndexSet;



@interface HMIPersonBlob : HMFObject

@property (readonly) NSUUID *blobID; // ivar: _blobID
@property (readonly) CGSize frameDimensions; // ivar: _frameDimensions
@property CGVector motionMean; // ivar: _motionMean
@property NSUInteger personIndex; // ivar: _personIndex
@property (retain) NSMutableIndexSet *personIndices; // ivar: _personIndices
@property float personIouMax; // ivar: _personIouMax
@property CGPoint position; // ivar: _position
@property (readonly) CGRect regionOfInterest; // ivar: _regionOfInterest
@property CGRect torsoBoundingBox; // ivar: _torsoBoundingBox


-(BOOL)isBijectiveToPersonBlob:(id)arg0 ;
-(BOOL)isLost;
-(BOOL)isMoving;
-(float)boxDistanceToPersonBlob:(id)arg0 ;
-(float)similarityToPersonBlob:(id)arg0 ;
-(float)sizeDistanceToPersonBlob:(id)arg0 ;
-(id)initWithNewPersonEvent:(id)arg0 motionVectors:(id)arg1 personIndex:(NSUInteger)arg2 regionOfInterest:(struct CGRect )arg3 frameDimensions:(struct CGSize )arg4 ;
-(id)initWithPersonBlob:(id)arg0 motionVectors:(id)arg1 personIndex:(NSUInteger)arg2 regionOfInterest:(struct CGRect )arg3 frameDimensions:(struct CGSize )arg4 ;
-(id)initWithUnrecognizablePersonEvent:(id)arg0 personIndex:(NSUInteger)arg1 regionOfInterest:(struct CGRect )arg2 frameDimensions:(struct CGSize )arg3 ;
-(void)_computeBlobPropertiesWithBoundingBox:(struct CGRect )arg0 dx:(float)arg1 dy:(float)arg2 motionVectors:(id)arg3 isDetection:(BOOL)arg4 ;


@end


#endif