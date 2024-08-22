// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CIVNFACEDETECTOR_H
#define CIVNFACEDETECTOR_H



#import "CIDetector.h"
#import "CIContext.h"

@interface CIVNFaceDetector : CIDetector

@property (readonly, retain) CIContext *context; // ivar: context


-(id)featuresInImage:(id)arg0 options:(id)arg1 ;
-(id)initWithContext:(id)arg0 options:(id)arg1 ;
-(void)dealloc;


@end


#endif