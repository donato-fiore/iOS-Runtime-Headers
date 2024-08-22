// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CRDATADETECTORSOUTPUTREGION_H
#define CRDATADETECTORSOUTPUTREGION_H

@class DDScannerResult;


#import "CROutputRegion.h"

@interface CRDataDetectorsOutputRegion : CROutputRegion

@property NSUInteger dataType; // ivar: _dataType
@property (retain) DDScannerResult *ddResult; // ivar: _ddResult


+(NSUInteger)dataTypeForDDResult:(id)arg0 ;
+(id)outputRegionWithDDResult:(id)arg0 children:(id)arg1 ;
-(BOOL)computesBoundsFromChildren;
-(BOOL)computesTranscriptFromChildren;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)type;
-(id)copyWithZone:(struct _NSZone *)arg0 copyChildren:(BOOL)arg1 copyCandidates:(BOOL)arg2 ;
-(id)crCodableDataRepresentation;
-(id)initWithCRCodableDataRepresentation:(id)arg0 version:(NSInteger)arg1 offset:(*NSUInteger)arg2 ;


@end


#endif