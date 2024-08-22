// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CISAMPLER_H
#define CISAMPLER_H

@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "CIFilterShape.h"

@interface CISampler : NSObject <NSCopying>

 {
    *void _priv;
}


@property (readonly) CIFilterShape *definition;
@property (readonly) CGRect extent;


+(id)samplerWithImage:(id)arg0 ;
+(id)samplerWithImage:(id)arg0 keysAndValues:(id)arg1 ;
+(id)samplerWithImage:(id)arg0 options:(id)arg1 ;
-(*void)_internalRepresentation;
-(*void)colorSpace;
-(id)_initWithImage:(id)arg0 key0:(id)arg1 vargs:(char *)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)description;
-(id)init;
-(id)initWithImage:(id)arg0 ;
-(id)initWithImage:(id)arg0 keysAndValues:(id)arg1 ;
-(id)initWithImage:(id)arg0 options:(id)arg1 ;
-(id)opaqueShape;
-(id)wrapMode;
-(void)dealloc;


@end


#endif