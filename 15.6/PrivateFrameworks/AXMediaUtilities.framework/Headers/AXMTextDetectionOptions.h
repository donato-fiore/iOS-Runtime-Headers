// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AXMTEXTDETECTIONOPTIONS_H
#define AXMTEXTDETECTIONOPTIONS_H

@class NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface AXMTextDetectionOptions : NSObject <NSSecureCoding>



@property (nonatomic) CGFloat normalizedMinimumTextHeightRatio; // ivar: _normalizedMinimumTextHeightRatio
@property (nonatomic) NSUInteger postProcessingOptions; // ivar: _postProcessingOptions
@property (nonatomic) NSUInteger recognitionLevel; // ivar: _recognitionLevel
@property (readonly, nonatomic) BOOL shouldApplySemanticTextFiltering;
@property (retain, nonatomic) NSArray *textDetectionLocales; // ivar: _textDetectionLocales
@property (nonatomic) BOOL usesLanguageCorrection; // ivar: _usesLanguageCorrection


+(BOOL)supportsSecureCoding;
+(id)defaultOptions;
-(id)_init;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif