// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VNRECOGNIZEDTEXTOBSERVATION_H
#define VNRECOGNIZEDTEXTOBSERVATION_H

@class NSString, NSArray;


#import "VNRectangleObservation.h"

@interface VNRecognizedTextObservation : VNRectangleObservation

@property (nonatomic) BOOL isTitle; // ivar: _isTitle
@property (readonly, copy, nonatomic) NSString *text; // ivar: _text
@property (copy, nonatomic) NSArray *textObjects; // ivar: _textObjects


+(BOOL)supportsSecureCoding;
+(id)defaultOriginatingRequestClassNameForRequestRevision:(NSUInteger)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithCoder:(id)arg0 ;
-(id)topCandidates:(NSUInteger)arg0 ;
-(id)vn_cloneObject;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif