// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASVTEXTURECONVERTER_H
#define ASVTEXTURECONVERTER_H


#import <Foundation/Foundation.h>


@interface ASVTextureConverter : NSObject

@property (readonly, nonatomic) NSInteger converterType;


+(id)defaultTextureConverters;
+(id)newConverterOfType:(NSInteger)arg0 ;
+(id)preferredConverterFromConverters:(id)arg0 forTextureDescription:(id)arg1 ;
-(BOOL)canConvertTextureWithDescription:(id)arg0 ;
-(NSUInteger)alignUp:(NSUInteger)arg0 toAlignment:(NSUInteger)arg1 ;
-(struct ? )estimatedMemoryDeltaForTextureWithDescription:(id)arg0 ;


@end


#endif