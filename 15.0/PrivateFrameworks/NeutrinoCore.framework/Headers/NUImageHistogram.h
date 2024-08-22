// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NUIMAGEHISTOGRAM_H
#define NUIMAGEHISTOGRAM_H

@protocol NSCopying, NSMutableCopying;

#import <Foundation/Foundation.h>

#import "NUHistogram.h"

@interface NUImageHistogram : NSObject <NSCopying, NSMutableCopying>



@property (readonly, nonatomic) NSInteger binCount; // ivar: _binCount
@property (readonly, nonatomic) NUHistogram *blue; // ivar: _blue
@property (readonly, nonatomic) NUHistogram *green; // ivar: _green
@property (readonly, nonatomic) NUHistogram *luminance; // ivar: _luminance
@property (readonly, nonatomic) ? range; // ivar: _range
@property (readonly, nonatomic) NUHistogram *red; // ivar: _red
@property (readonly, nonatomic) NSInteger sampleCount; // ivar: _sampleCount


+(Class)_histogramClass;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)immutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithBinCount:(NSInteger)arg0 range:(struct ? )arg1 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;


@end


#endif