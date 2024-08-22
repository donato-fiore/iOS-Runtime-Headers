// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VNRECOGNIZEDTEXTBLOCK_H
#define VNRECOGNIZEDTEXTBLOCK_H

@class CROutputRegion, NSAttributedString, NSArray;


#import "VNRecognizedText.h"

@interface VNRecognizedTextBlock : VNRecognizedText {
    CROutputRegion *_crOutputRegion;
    NSUInteger _requestRevision;
}


@property (readonly, copy, nonatomic) NSAttributedString *attributedString; // ivar: _attributedString
@property (readonly, copy, nonatomic) NSArray *baselines; // ivar: _baselines


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(NSUInteger)requestRevision;
-(float)confidence;
-(id)boundingBoxForRange:(struct _NSRange )arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)getCROutputRegion;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRequestRevision:(NSUInteger)arg0 crOutputRegion:(id)arg1 ;
-(id)string;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif