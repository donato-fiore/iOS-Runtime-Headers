// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef JFXMETADATAVALIDATOR_H
#define JFXMETADATAVALIDATOR_H


#import <Foundation/Foundation.h>


@interface JFXMetadataValidator : NSObject

@property (nonatomic) NSInteger faceDataDetectedFacesCount; // ivar: _faceDataDetectedFacesCount
@property (nonatomic) NSUInteger lastARFrameHasFaceAnchors; // ivar: _lastARFrameHasFaceAnchors
@property (nonatomic) NSUInteger lastARFrameIsFaceTracked; // ivar: _lastARFrameIsFaceTracked


-(id)init;
-(void)reset;
-(void)validateARImageData:(id)arg0 ;
-(void)validateFaceTrackedARFrame:(id)arg0 ;


@end


#endif