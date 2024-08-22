// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSGLYPHGENERATOR_H
#define NSGLYPHGENERATOR_H


#import <Foundation/Foundation.h>


@interface NSGlyphGenerator : NSObject



+(id)defaultGlyphGenerator;
+(id)sharedGlyphGenerator;
+(void)initialize;
-(void)generateGlyphsForGlyphStorage:(id)arg0 desiredNumberOfCharacters:(NSUInteger)arg1 glyphIndex:(*NSUInteger)arg2 characterIndex:(*NSUInteger)arg3 ;


@end


#endif