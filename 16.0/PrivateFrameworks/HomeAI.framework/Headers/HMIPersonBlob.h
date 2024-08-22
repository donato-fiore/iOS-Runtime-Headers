// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMIPERSONBLOB_H
#define HMIPERSONBLOB_H

@class HMFObject, NSUUID, NSMutableIndexSet;


#import "HMIFaceprint.h"
#import "HMITorsoprint.h"

@interface HMIPersonBlob : HMFObject

@property (retain) NSUUID *blobID; // ivar: _blobID
@property (readonly) CGRect boundingBox; // ivar: _boundingBox
@property (readonly) HMIFaceprint *faceprint; // ivar: _faceprint
@property (retain) NSMutableIndexSet *personIndices; // ivar: _personIndices
@property (readonly) ? timeStamp; // ivar: _timeStamp
@property (readonly) HMITorsoprint *torsoprint; // ivar: _torsoprint


-(BOOL)isExpiredAtTimeStamp:(struct ? )arg0 ;
-(float)similarityToPersonBlob:(id)arg0 ;
-(id)initWithNewPersonEvent:(id)arg0 timeStamp:(struct ? )arg1 ;
-(id)shortDescription;
-(void)trackPersonBlob:(id)arg0 ;


@end


#endif