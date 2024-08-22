// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AIRECOGNIZEDTEXT_H
#define AIRECOGNIZEDTEXT_H

@class NSNumber, VNRecognizedText, NSString;

#import <Foundation/Foundation.h>


@interface AIRecognizedText : NSObject

@property (nonatomic) CGPoint center; // ivar: _center
@property (retain, nonatomic) NSNumber *numericalValue; // ivar: _numericalValue
@property (retain, nonatomic) VNRecognizedText *recognizedText; // ivar: _recognizedText
@property (nonatomic) CGRect regionOfInterest; // ivar: _regionOfInterest
@property (retain, nonatomic) NSString *string; // ivar: _string
@property (nonatomic) CGFloat width; // ivar: _width


-(id)description;
-(id)initWithString:(id)arg0 ;
-(id)initWithString:(id)arg0 center:(struct CGPoint )arg1 ;
-(id)initWithString:(id)arg0 center:(struct CGPoint )arg1 numericalValue:(id)arg2 ;
-(id)initWithString:(id)arg0 center:(struct CGPoint )arg1 width:(CGFloat)arg2 numericalValue:(id)arg3 ;
-(id)initWithTextObservation:(id)arg0 ;
-(id)initWithTextObservation:(id)arg0 regionOfInterest:(struct CGRect )arg1 ;
-(struct CGPoint )_point:(struct CGPoint )arg0 adjustedByRegionOfInterest:(struct CGRect )arg1 ;
-(struct CGRect )boundingBoxForRange:(struct _NSRange )arg0 error:(*id)arg1 ;


@end


#endif