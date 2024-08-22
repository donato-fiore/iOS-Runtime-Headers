// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NUSURFACETILEADAPTER_H
#define NUSURFACETILEADAPTER_H

@class NSString;
@protocol NUSurfaceTile;

#import <Foundation/Foundation.h>

#import "NUIOSurface.h"

@interface NUSurfaceTileAdapter : NSObject <NUSurfaceTile>



@property (readonly, nonatomic) ? contentRect; // ivar: _contentRect
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) ? frameRect; // ivar: _frameRect
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NUIOSurface *surface; // ivar: _surface


-(id)init;
-(id)initWithFrameRect:(struct ? )arg0 contentRect:(struct ? )arg1 surface:(id)arg2 ;


@end


#endif