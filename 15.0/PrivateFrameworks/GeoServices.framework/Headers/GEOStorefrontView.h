// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOSTOREFRONTVIEW_H
#define GEOSTOREFRONTVIEW_H


#import <Foundation/Foundation.h>

#import "GEOStorefrontImagery.h"

@interface GEOStorefrontView : NSObject

@property (readonly, nonatomic) NSUInteger identifier; // ivar: _identifier
@property (readonly, nonatomic) GEOStorefrontImagery *imageryInfo; // ivar: _imageryInfo
@property (readonly, nonatomic) GEOOrientedPosition lookAt; // ivar: _lookAt


-(id)init;
-(id)initWithStorefrontView:(id)arg0 ;


@end


#endif