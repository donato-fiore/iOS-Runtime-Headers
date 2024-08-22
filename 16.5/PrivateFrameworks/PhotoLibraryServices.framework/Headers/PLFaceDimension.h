// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLFACEDIMENSION_H
#define PLFACEDIMENSION_H

@protocol PFPhotosFaceRepresentation;

#import <Foundation/Foundation.h>


@interface PLFaceDimension : NSObject <PFPhotosFaceRepresentation>

 {
    NSInteger _sourceWidth;
    NSInteger _sourceHeight;
    CGFloat _centerX;
    CGFloat _centerY;
    CGFloat _size;
}




-(BOOL)photosFaceRepresentationHasSmile;
-(BOOL)photosFaceRepresentationIsLeftEyeClosed;
-(BOOL)photosFaceRepresentationIsRightEyeClosed;
-(CGFloat)photosFaceRepresentationBlurScore;
-(CGFloat)photosFaceRepresentationCenterX;
-(CGFloat)photosFaceRepresentationCenterY;
-(CGFloat)photosFaceRepresentationQuality;
-(CGFloat)photosFaceRepresentationRoll;
-(CGFloat)photosFaceRepresentationSize;
-(NSInteger)photosFaceRepresentationClusterSequenceNumber;
-(NSInteger)photosFaceRepresentationQualityMeasure;
-(NSInteger)photosFaceRepresentationSourceHeight;
-(NSInteger)photosFaceRepresentationSourceWidth;
-(id)description;
-(id)initWithSourceWidth:(NSInteger)arg0 sourceHeight:(NSInteger)arg1 centerX:(CGFloat)arg2 centerY:(CGFloat)arg3 size:(CGFloat)arg4 ;
-(id)photosFaceRepresentationLocalIdentifier;


@end


#endif