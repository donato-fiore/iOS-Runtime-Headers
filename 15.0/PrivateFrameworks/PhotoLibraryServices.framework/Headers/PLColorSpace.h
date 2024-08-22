// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLCOLORSPACE_H
#define PLCOLORSPACE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface PLColorSpace : NSObject

@property (copy, nonatomic) NSString *colorSpaceName; // ivar: _colorSpaceName


+(id)colorSpaceFromName:(id)arg0 ;
+(id)commonColorSpace_displaySpace;
+(id)commonColorSpace_sRGB;
+(id)commonColorSpace_unspecified;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithName:(id)arg0 ;


@end


#endif