// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _PXPLACESIMAGECACHEKEY_H
#define _PXPLACESIMAGECACHEKEY_H

@class NSString;
@protocol PXPlacesGeotaggable;

#import <Foundation/Foundation.h>


@interface _PXPlacesImageCacheKey : NSObject {
    id<PXPlacesGeotaggable> *_geotaggable;
    NSString *_key;
}




-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)geotaggable;
-(id)initWithGeotaggable:(id)arg0 andKey:(id)arg1 ;
-(id)key;


@end


#endif