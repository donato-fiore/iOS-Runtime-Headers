// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIFOCUSREGIONCONTENTATTRIBUTES_H
#define _UIFOCUSREGIONCONTENTATTRIBUTES_H

@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "_UIFocusRegion.h"

@interface _UIFocusRegionContentAttributes : NSObject <NSCopying>



@property (retain, nonatomic) _UIFocusRegion *contentRegion; // ivar: _contentRegion
@property (nonatomic) BOOL requiresIntersectionWithFocusMapSearchArea; // ivar: _requiresIntersectionWithFocusMapSearchArea


+(id)attributesForFocusRegionContentInContainer:(id)arg0 coordinateSpace:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif