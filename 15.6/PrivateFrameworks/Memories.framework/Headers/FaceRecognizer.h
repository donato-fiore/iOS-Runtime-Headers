// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FACERECOGNIZER_H
#define FACERECOGNIZER_H



#import "VEiOSSharedObject.h"

@interface FaceRecognizer : VEiOSSharedObject

@property (nonatomic) BOOL highAccuracy; // ivar: _highAccuracy


+(id)sharedRecognizer;
-(id)facesInImage:(id)arg0 ;
-(struct CGRect )containingRect:(id)arg0 ;
-(struct CGRect )containingRectForFaces:(id)arg0 scaleEachFaceRectBy:(CGFloat)arg1 ;


@end


#endif