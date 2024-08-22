// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AXMVISIONANALYSISOPTIONS_H
#define AXMVISIONANALYSISOPTIONS_H

@class NSData, NSArray, NSLocale;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "AXMTextDetectionOptions.h"

@interface AXMVisionAnalysisOptions : NSObject <NSSecureCoding>



@property (nonatomic) NSInteger clientID; // ivar: _clientID
@property (nonatomic) BOOL detectAXElements; // ivar: _detectAXElements
@property (nonatomic) BOOL detectAesthetics; // ivar: _detectAesthetics
@property (nonatomic) BOOL detectCaptions; // ivar: _detectCaptions
@property (nonatomic) BOOL detectFaceAttributes; // ivar: _detectFaceAttributes
@property (nonatomic) BOOL detectFaceExpressions; // ivar: _detectFaceExpressions
@property (nonatomic) BOOL detectFaceLandmarks; // ivar: _detectFaceLandmarks
@property (nonatomic) BOOL detectFaceNames; // ivar: _detectFaceNames
@property (nonatomic) BOOL detectFacePose; // ivar: _detectFacePose
@property (nonatomic) BOOL detectFaceRectangles; // ivar: _detectFaceRectangles
@property (readonly, nonatomic) BOOL detectFaces;
@property (nonatomic) BOOL detectHorizon; // ivar: _detectHorizon
@property (nonatomic) BOOL detectIconClass; // ivar: _detectIconClass
@property (nonatomic) BOOL detectModelClassifications; // ivar: _detectModelClassifications
@property (nonatomic) BOOL detectNSFW; // ivar: _detectNSFW
@property (nonatomic) BOOL detectObjects; // ivar: _detectObjects
@property (nonatomic) BOOL detectProminentObjects; // ivar: _detectProminentObjects
@property (nonatomic) BOOL detectRectangles; // ivar: _detectRectangles
@property (nonatomic) BOOL detectScenes; // ivar: _detectScenes
@property (nonatomic) BOOL detectSignificantEvents; // ivar: _detectSignificantEvents
@property (nonatomic) BOOL detectText; // ivar: _detectText
@property (nonatomic) BOOL detectTraits; // ivar: _detectTraits
@property (retain, nonatomic) NSData *equivalenceToken; // ivar: _equivalenceToken
@property (readonly, nonatomic) BOOL hasDetectionsEnabled;
@property (retain, nonatomic) NSArray *ignoredLayerContextIDs; // ivar: _ignoredLayerContextIDs
@property (nonatomic) BOOL includeImageInResult; // ivar: _includeImageInResult
@property (retain, nonatomic) NSArray *includedLayerContextIDs; // ivar: _includedLayerContextIDs
@property (retain, nonatomic) NSLocale *preferredOutputLocale; // ivar: _preferredOutputLocale
@property (nonatomic) BOOL preserveInputImageSize; // ivar: _preserveInputImageSize
@property (retain, nonatomic) AXMTextDetectionOptions *textDetectionOptions; // ivar: _textDetectionOptions


+(BOOL)supportsSecureCoding;
+(id)defaultOptions;
+(id)voiceOverOptions;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)disableAllDetectors;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif