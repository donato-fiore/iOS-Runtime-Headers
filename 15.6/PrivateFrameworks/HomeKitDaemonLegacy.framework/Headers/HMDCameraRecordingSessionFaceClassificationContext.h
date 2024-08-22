// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDCAMERARECORDINGSESSIONFACECLASSIFICATIONCONTEXT_H
#define HMDCAMERARECORDINGSESSIONFACECLASSIFICATIONCONTEXT_H

@class HMFObject, NSMutableSet, NSData;



@interface HMDCameraRecordingSessionFaceClassificationContext : HMFObject

@property (readonly) NSMutableSet *faceClassifications; // ivar: _faceClassifications
@property (readonly) NSData *faceCropData; // ivar: _faceCropData


-(id)attributeDescriptions;
-(id)initWithFaceCropData:(id)arg0 ;


@end


#endif