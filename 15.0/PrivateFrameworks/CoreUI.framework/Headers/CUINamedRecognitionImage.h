// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CUINAMEDRECOGNITIONIMAGE_H
#define CUINAMEDRECOGNITIONIMAGE_H



#import "CUINamedLookup.h"

@interface CUINamedRecognitionImage : CUINamedLookup

@property (readonly, nonatomic) int exifOrientation;
@property (readonly, nonatomic) *CGImage image;
@property (readonly, nonatomic) CGSize physicalSizeInMeters;


-(id)initWithName:(id)arg0 usingRenditionKey:(id)arg1 fromTheme:(NSUInteger)arg2 ;


@end


#endif