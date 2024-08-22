// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSDCONTENTLOCATION_H
#define TSDCONTENTLOCATION_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface TSDContentLocation : NSObject <NSCopying>



@property (nonatomic) CGPoint unscaledPoint; // ivar: _unscaledPoint
@property (nonatomic) CGFloat viewScale; // ivar: _viewScale


+(id)contentLocation;
+(id)contentLocationInterpolatingFromLocation:(id)arg0 toLocation:(id)arg1 fraction:(CGFloat)arg2 ;
+(id)contentLocationWithUnscaledPoint:(struct CGPoint )arg0 viewScale:(CGFloat)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;


@end


#endif