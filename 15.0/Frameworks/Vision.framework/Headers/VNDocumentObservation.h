// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VNDOCUMENTOBSERVATION_H
#define VNDOCUMENTOBSERVATION_H

@class CRDocumentOutputRegion, NSArray, NSString;
@protocol VNDataDetectorSupporting;


#import "VNDetectedObjectObservation.h"
#import "VNRecognizedTextBlockObservation.h"

@interface VNDocumentObservation : VNDetectedObjectObservation <VNDataDetectorSupporting>

 {
    CRDocumentOutputRegion *_topLevelRegion;
    NSArray *_blocks;
}


@property (readonly, nonatomic, getter=getBlocks) NSArray *blocks;
@property (readonly, nonatomic, getter=getTitle) VNRecognizedTextBlockObservation *title;
@property (readonly, nonatomic, getter=getTranscript) NSString *transcript;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_textBlockObservationsFromRegion:(id)arg0 requestRevision:(NSUInteger)arg1 ;
-(id)blocksWithTypes:(NSUInteger)arg0 inRegion:(struct CGRect )arg1 ;
-(id)boundingBoxForTextRange:(struct _NSRange )arg0 error:(*id)arg1 ;
-(id)closestTextBlockOfTypes:(NSUInteger)arg0 toPoint:(struct CGPoint )arg1 maximumPixelDistance:(NSInteger)arg2 ;
-(id)getCRDocumentOutputRegion;
-(id)getDataDetectorResults:(*id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTopLevelRegion:(id)arg0 requestRevision:(NSUInteger)arg1 ;
-(id)textBlockOfTypes:(NSUInteger)arg0 containingTextAtIndex:(NSInteger)arg1 ;
-(id)textBlockWithCharacterRange:(struct _NSRange )arg0 ;
-(id)vn_cloneObject;
-(struct _NSRange )rangeOfTextBlock:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif