// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CRFEATURESEQUENCERECOGNITIONINFO_H
#define CRFEATURESEQUENCERECOGNITIONINFO_H

@class NSString;
@protocol CRTextRecognizerFeatureInfo;

#import <Foundation/Foundation.h>

#import "CRTextFeature.h"

@interface CRFeatureSequenceRecognitionInfo : NSObject <CRTextRecognizerFeatureInfo>



@property CGRect bounds; // ivar: _bounds
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property CGRect rotatedROI; // ivar: _rotatedROI
@property float scale; // ivar: _scale
@property (readonly) Class superclass;
@property (retain) CRTextFeature *textFeature; // ivar: _textFeature


+(id)infoForFeature:(id)arg0 scale:(float)arg1 bounds:(struct CGRect )arg2 rotatedROI:(struct CGRect )arg3 ;


@end


#endif