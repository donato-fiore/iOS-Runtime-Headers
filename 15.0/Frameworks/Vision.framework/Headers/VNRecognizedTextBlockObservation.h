// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VNRECOGNIZEDTEXTBLOCKOBSERVATION_H
#define VNRECOGNIZEDTEXTBLOCKOBSERVATION_H

@class CROutputRegion, NSArray, NSString;
@protocol VNDataDetectorSupporting;


#import "VNRecognizedTextObservation.h"

@interface VNRecognizedTextBlockObservation : VNRecognizedTextObservation <VNDataDetectorSupporting>

 {
    CROutputRegion *_crOutputRegion;
}


@property (readonly, nonatomic, getter=getChildren) NSArray *children;
@property (readonly, nonatomic, getter=getLines) NSArray *lines;
@property (readonly, nonatomic, getter=getTranscript) NSString *transcript;


-(id)boundingBoxForRange:(struct _NSRange )arg0 error:(*id)arg1 ;
-(id)debugDescription;
-(id)getCROutputRegion;
-(id)getDataDetectorResults:(*id)arg0 ;
-(id)initWithRequestRevision:(NSUInteger)arg0 crOutputRegion:(id)arg1 ;
-(id)topCandidates:(NSUInteger)arg0 ;


@end


#endif