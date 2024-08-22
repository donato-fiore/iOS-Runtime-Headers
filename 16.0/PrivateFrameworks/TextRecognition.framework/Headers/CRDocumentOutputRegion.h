// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CRDOCUMENTOUTPUTREGION_H
#define CRDOCUMENTOUTPUTREGION_H

@class NSArray, NSString;
@protocol NSSecureCoding, CROutputRegionLayoutContributing;


#import "CROutputRegion.h"
#import "CRDocumentOutputRegionMetadata.h"
#import "CRTextDetectorResults.h"

@interface CRDocumentOutputRegion : CROutputRegion <NSSecureCoding, CROutputRegionLayoutContributing>



@property (retain) CRDocumentOutputRegionMetadata *additionalMetadata; // ivar: _additionalMetadata
@property (retain) NSArray *cachedLayoutComponents; // ivar: _cachedLayoutComponents
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) CRTextDetectorResults *detectorResults; // ivar: _detectorResults
@property NSUInteger documentRevision; // ivar: _documentRevision
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain) CROutputRegion *title; // ivar: _title


+(id)documentWithLines:(id)arg0 title:(id)arg1 confidence:(int)arg2 imageSize:(struct CGSize )arg3 ;
+(id)documentWithRegions:(id)arg0 title:(id)arg1 confidence:(int)arg2 imageSize:(struct CGSize )arg3 ;
-(BOOL)_shouldReprocessRev1;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)shouldReprocessDocument;
-(NSUInteger)type;
-(id)copyWithZone:(struct _NSZone *)arg0 copyChildren:(BOOL)arg1 copyCandidates:(BOOL)arg2 ;
-(id)crCodableDataRepresentation;
-(id)initWithCRCodableDataRepresentation:(id)arg0 version:(NSInteger)arg1 offset:(*NSUInteger)arg2 ;
-(id)layoutComponents;
-(id)outputRegionWithContentsBetweenStartPoint:(struct CGPoint )arg0 endPoint:(struct CGPoint )arg1 ;
-(id)outputRegionWithContentsOfCharacterRange:(struct _NSRange )arg0 ;
-(id)outputRegionWithContentsOfQuad:(id)arg0 ;
-(void)collectMetadataFromResults:(id)arg0 ;
-(void)setChildren:(id)arg0 ;


@end


#endif