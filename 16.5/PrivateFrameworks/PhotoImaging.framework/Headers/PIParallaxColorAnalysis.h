// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PIPARALLAXCOLORANALYSIS_H
#define PIPARALLAXCOLORANALYSIS_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface PIParallaxColorAnalysis : NSObject

@property (copy, nonatomic) NSArray *backgroundColors; // ivar: _backgroundColors
@property (nonatomic) CGFloat backgroundLuminance; // ivar: _backgroundLuminance
@property (copy, nonatomic) NSArray *colors; // ivar: _colors
@property (copy, nonatomic) NSArray *foregroundColors; // ivar: _foregroundColors
@property (nonatomic) CGFloat foregroundLuminance; // ivar: _foregroundLuminance
@property (nonatomic) CGFloat luminance; // ivar: _luminance
@property (nonatomic) NSInteger version; // ivar: _version


+(NSInteger)currentVersion;
+(id)colorsFromDictionary:(id)arg0 key:(id)arg1 error:(*id)arg2 ;
+(id)loadFromContentsDictionary:(id)arg0 error:(*id)arg1 ;
-(id)contentsDictionary;
-(id)init;


@end


#endif