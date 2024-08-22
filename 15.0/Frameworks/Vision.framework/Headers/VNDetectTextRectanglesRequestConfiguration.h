// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VNDETECTTEXTRECTANGLESREQUESTCONFIGURATION_H
#define VNDETECTTEXTRECTANGLESREQUESTCONFIGURATION_H

@class NSString;


#import "VNImageBasedRequestConfiguration.h"

@interface VNDetectTextRectanglesRequestConfiguration : VNImageBasedRequestConfiguration

@property (copy, nonatomic) NSString *additionalCharacters; // ivar: _additionalCharacters
@property (nonatomic) NSUInteger algorithm; // ivar: _algorithm
@property (nonatomic) BOOL detectDiacritics; // ivar: _detectDiacritics
@property (nonatomic) BOOL minimizeFalseDetections; // ivar: _minimizeFalseDetections
@property (nonatomic) NSUInteger minimumCharacterPixelHeight; // ivar: _minimumCharacterPixelHeight
@property (nonatomic) BOOL reportCharacterBoxes; // ivar: _reportCharacterBoxes
@property (copy, nonatomic) NSString *textRecognition; // ivar: _textRecognition


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithRequestClass:(Class)arg0 ;


@end


#endif