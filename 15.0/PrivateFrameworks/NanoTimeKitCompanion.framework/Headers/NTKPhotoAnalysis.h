// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTKPHOTOANALYSIS_H
#define NTKPHOTOANALYSIS_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface NTKPhotoAnalysis : NSObject <NSCopying, NSSecureCoding>

 {
    ? _data;
}


@property (readonly, nonatomic) float bgBrightness;
@property (readonly, nonatomic) float bgHue;
@property (readonly, nonatomic) float bgSaturation;
@property (readonly, nonatomic, getter=isColoredText) BOOL coloredText;
@property (readonly, nonatomic, getter=isComplexBackground) BOOL complexBackground;
@property (readonly, nonatomic) float shadowBrightness;
@property (readonly, nonatomic) float shadowHue;
@property (readonly, nonatomic) float shadowSaturation;
@property (readonly, nonatomic) ? structure;
@property (readonly, nonatomic) float textBrightness;
@property (readonly, nonatomic) float textHue;
@property (readonly, nonatomic) float textSaturation;
@property (readonly, nonatomic) unsigned int version; // ivar: _version


+(BOOL)_dictionaryHasValidValues:(id)arg0 ;
+(BOOL)_dictionaryPassesBasicCheck:(id)arg0 ;
+(BOOL)isValidDictionary:(id)arg0 ;
+(BOOL)supportsSecureCoding;
+(id)analysisWithImage:(id)arg0 alignment:(NSUInteger)arg1 deviceSizeClass:(NSUInteger)arg2 ;
+(id)defaultAnalysis;
+(id)invalidAnalysis;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)encodeAsDictionary;
-(id)initFromDictionary:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithStructure:(struct ? )arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif