// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CROUTPUTREGION_H
#define CROUTPUTREGION_H

@class NSArray, NSString, NSUUID;
@protocol CRCodable, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "CRNormalizedQuad.h"
#import "CRTextFeature.h"

@interface CROutputRegion : NSObject <CRCodable, NSSecureCoding, NSCopying>



@property (retain, nonatomic) NSArray *auxiliaryChildren; // ivar: _auxiliaryChildren
@property (nonatomic) CGFloat baselineAngle; // ivar: _baselineAngle
@property (retain, nonatomic) CRNormalizedQuad *boundingQuad; // ivar: _boundingQuad
@property (retain, nonatomic) NSArray *candidates; // ivar: _candidates
@property (retain, nonatomic) NSArray *children; // ivar: _children
@property (readonly, nonatomic) BOOL computesBoundsFromChildren;
@property (readonly, nonatomic) BOOL computesTranscriptFromChildren;
@property (nonatomic) int confidence; // ivar: _confidence
@property (readonly, nonatomic) NSArray *contentBaselines;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) float rawConfidence; // ivar: _rawConfidence
@property (retain, nonatomic) NSString *recognizedLocale; // ivar: _recognizedLocale
@property (readonly, nonatomic) NSArray *regionsSuitableForDataDetectorOutput;
@property (nonatomic) BOOL shouldComputeBoundsFromChildren; // ivar: _shouldComputeBoundsFromChildren
@property (nonatomic) BOOL shouldComputeTranscriptFromChildren; // ivar: _shouldComputeTranscriptFromChildren
@property (readonly) Class superclass;
@property (retain, nonatomic) NSString *text; // ivar: _text
@property (retain, nonatomic) CRTextFeature *textFeature; // ivar: _textFeature
@property (retain, nonatomic) NSArray *transcriptComponents; // ivar: _transcriptComponents
@property (readonly, nonatomic) NSUInteger type; // ivar: _type
@property (retain, nonatomic) NSUUID *uuid; // ivar: _uuid
@property (readonly, nonatomic) NSInteger wordCount;


+(BOOL)supportsSecureCoding;
+(Class)decodableClassFromClassName:(id)arg0 ;
+(id)decodableClasses;
+(id)decodableSubClasses;
+(id)outputRegionWithCRCodableDataRepresentation:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)wordCountInCharacterRange:(struct _NSRange )arg0 ;
-(NSUInteger)_indexOfNearestChildToPoint:(struct CGPoint )arg0 returnFirstMatch:(BOOL)arg1 ;
-(NSUInteger)_indexOfNearestRegionToPoint:(struct CGPoint )arg0 regions:(id)arg1 returnFirstMatch:(BOOL)arg2 distance:(*CGFloat)arg3 ;
-(id)_compositeRegexForReplacing:(id)arg0 nonspaceLeft:(BOOL)arg1 nonspaceRight:(BOOL)arg2 ;
-(id)_copyChildrenInRange:(struct _NSRange )arg0 ;
-(id)_ddFriendlyText:(id)arg0 indexMapping:(*id)arg1 ;
-(id)closestContentRegionOfType:(NSUInteger)arg0 toNormalizedPoint:(struct CGPoint )arg1 maxPixelDistance:(NSInteger)arg2 ;
-(id)computeAuxiliaryChildren;
-(id)contentRegionOfType:(NSUInteger)arg0 containingTextAtIndex:(NSInteger)arg1 ;
-(id)contentsWithTypes:(NSUInteger)arg0 ;
-(id)copyIncludingChildren:(BOOL)arg0 includingCandidates:(BOOL)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 copyChildren:(BOOL)arg1 copyCandidates:(BOOL)arg2 ;
-(id)crCodableDataRepresentation;
-(id)ddScannerConfig;
-(id)decodeOutputsArrayFromData:(id)arg0 offset:(*NSUInteger)arg1 ;
-(id)init;
-(id)initWithCRCodableDataRepresentation:(id)arg0 version:(NSInteger)arg1 offset:(*NSUInteger)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithConfidence:(int)arg0 baselineAngle:(CGFloat)arg1 ;
-(id)joiningDelimeter;
-(id)outputRegionWithContentsBetweenStartPoint:(struct CGPoint )arg0 endPoint:(struct CGPoint )arg1 ;
-(id)outputRegionWithContentsEndingAtPoint:(struct CGPoint )arg0 ;
-(id)outputRegionWithContentsOfCharacterRange:(struct _NSRange )arg0 ;
-(id)outputRegionWithContentsOfQuad:(id)arg0 ;
-(id)outputRegionWithContentsStartingAtPoint:(struct CGPoint )arg0 ;
-(id)quadForTextInCharacterRange:(struct _NSRange )arg0 ;
-(id)scriptCategoryResults;
-(id)selectedLocale;
-(struct _NSRange )_rangeForChild:(id)arg0 ;
-(struct _NSRange )rangeOfContentRegion:(id)arg0 ;
-(void)_computeTranscript;
-(void)_enumerateRegions:(id)arg0 withTypes:(NSUInteger)arg1 recursively:(BOOL)arg2 usingBlock:(id)arg3 ;
-(void)_overrideSetBoundingQuad:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)enumerateContentsWithTypes:(NSUInteger)arg0 usingBlock:(id)arg1 ;


@end


#endif