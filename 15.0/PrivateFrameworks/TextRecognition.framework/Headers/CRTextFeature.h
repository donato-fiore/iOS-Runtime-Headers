// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CRTEXTFEATURE_H
#define CRTEXTFEATURE_H

@class NSArray, NSNumber, NSString, NSUUID;
@protocol NSCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "CRImage.h"

@interface CRTextFeature : NSObject <NSCoding, NSCopying>



@property float baselineAngle; // ivar: _baselineAngle
@property (readonly) CGPoint baselineOrigin; // ivar: _baselineOrigin
@property NSInteger bestCandidateIndex; // ivar: _bestCandidateIndex
@property CGPoint bottomLeft; // ivar: _bottomLeft
@property CGPoint bottomRight; // ivar: _bottomRight
@property CGRect bounds; // ivar: _bounds
@property (retain) NSArray *candidateActivationProbs; // ivar: _candidateActivationProbs
@property (retain) NSArray *candidateProbs; // ivar: _candidateProbs
@property (retain) NSNumber *confidence; // ivar: _confidence
@property BOOL contextSet; // ivar: _contextSet
@property int featureMapID; // ivar: _featureMapID
@property (retain, nonatomic) NSString *gtStringValue; // ivar: _gtStringValue
@property (retain) CRImage *imageCut; // ivar: _imageCut
@property BOOL isCurve; // ivar: _isCurve
@property (retain) NSArray *scriptCategoryResults; // ivar: _scriptCategoryResults
@property (retain) NSArray *scriptCount; // ivar: _scriptCount
@property (retain) NSString *selectedLocale; // ivar: _selectedLocale
@property BOOL shouldExpandToFullWidth; // ivar: _shouldExpandToFullWidth
@property unsigned char sizeHint; // ivar: _sizeHint
@property (retain, nonatomic) NSString *stringValue; // ivar: _stringValue
@property (retain) NSArray *stringValueCandidates; // ivar: _stringValueCandidates
@property (retain) NSArray *subFeatureCandidates; // ivar: _subFeatureCandidates
@property (readonly) NSUInteger subFeatureType;
@property (retain) NSArray *subFeatures; // ivar: _subFeatures
@property float textlineHeight; // ivar: _textlineHeight
@property CGPoint topLeft; // ivar: _topLeft
@property CGPoint topRight; // ivar: _topRight
@property (readonly) CGPoint toplineOrigin; // ivar: _toplineOrigin
@property NSUInteger type; // ivar: _type
@property (retain) NSUUID *uuid; // ivar: _uuid


+(id)lineFeatures:(id)arg0 imageWidth:(NSUInteger)arg1 imageHeight:(NSUInteger)arg2 ;
+(id)overlayFeatures:(id)arg0 onImage:(id)arg1 showSubFeatures:(BOOL)arg2 ;
+(id)overlayFeaturesVertices:(id)arg0 onImage:(id)arg1 showSubFeatures:(BOOL)arg2 ;
+(id)sortedRotateTextFeatures:(id)arg0 center:(struct CGPoint )arg1 radians:(float)arg2 sortingWithinLine:(BOOL)arg3 ;
+(id)sortedTextFeatures:(id)arg0 ;
-(BOOL)isDown;
-(BOOL)isUp;
-(float)aspectRatioWithImageSize:(struct CGSize )arg0 ;
-(float)calculateTextBoxHeightForImageWidth:(NSUInteger)arg0 imageHeight:(NSUInteger)arg1 ;
-(float)caseInsensitiveProbabilityCandidateIndex:(int)arg0 ;
-(float)slopeOfSubFeatures;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)createCharacterSubFeaturesForCandidateAtIndex:(NSInteger)arg0 ;
-(id)createCharacterSubFeaturesForCandidateAtIndex:(NSInteger)arg0 topWhiteSpacePoints:(id)arg1 bottomWhiteSpacePoints:(id)arg2 falsePositiveFiltering:(BOOL)arg3 ;
-(id)createWordSubFeaturesForCandidateAtIndex:(NSInteger)arg0 topWhiteSpacePoints:(id)arg1 bottomWhiteSpacePoints:(id)arg2 hasBoundarySpacePoints:(BOOL)arg3 ;
-(id)initWithCCFeatureRect:(id)arg0 subFeatureRects:(id)arg1 rotatePortrait:(BOOL)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFeatureRect:(id)arg0 subFeatureRects:(id)arg1 ;
-(id)initWithFeatureRect:(id)arg0 subFeatureRects:(id)arg1 inImage:(id)arg2 ;
-(id)initWithFeatureRect:(struct CGRect )arg0 inImage:(id)arg1 ;
-(id)initWithSubfeatures:(id)arg0 ;
-(id)initWithSubfeatures:(id)arg0 stringValue:(id)arg1 ;
-(id)initWithTopLeft:(struct CGPoint )arg0 TopRight:(struct CGPoint )arg1 BottomLeft:(struct CGPoint )arg2 BottomRight:(struct CGPoint )arg3 ;
-(id)initWithVNTextObsevation:(id)arg0 ;
-(id)textFeatureScaledToImage:(id)arg0 ;
-(id)textFeatureScaledToImageWidth:(float)arg0 height:(float)arg1 ;
-(id)textFeatureSplitForStringValue:(id)arg0 ;
-(id)textFeaturebyPaddingToWidth:(float)arg0 height:(float)arg1 ;
-(id)wordFeatures;
-(struct CGPoint )getBaselineVector;
-(void)addKohlsDigitProjection;
-(void)adjustBoundsBasedOnSubfeaturesForImageSize:(struct CGSize )arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)estimateTopAndBaseline;
-(void)scale:(struct CGPoint )arg0 offset:(struct CGPoint )arg1 ;
-(void)updateSizeHints;


@end


#endif