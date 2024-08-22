// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VNRECOGNIZETEXTREQUESTCONFIGURATION_H
#define VNRECOGNIZETEXTREQUESTCONFIGURATION_H

@class NSArray;


#import "VNImageBasedRequestConfiguration.h"

@interface VNRecognizeTextRequestConfiguration : VNImageBasedRequestConfiguration

@property (nonatomic) BOOL automaticallyDetectsLanguage; // ivar: _automaticallyDetectsLanguage
@property (copy, nonatomic) NSArray *customWords; // ivar: _customWords
@property (nonatomic) float minimumTextHeight; // ivar: _minimumTextHeight
@property (copy, nonatomic) NSArray *recognitionLanguages; // ivar: _recognitionLanguages
@property (nonatomic) NSInteger recognitionLevel; // ivar: _recognitionLevel
@property (nonatomic) BOOL usesLanguageCorrection; // ivar: _usesLanguageCorrection


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithRequestClass:(Class)arg0 ;


@end


#endif