// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SXMAPITEM_H
#define SXMAPITEM_H

@class NSString;


#import "SXJSONObject.h"

@interface SXMapItem : SXJSONObject

@property (readonly, nonatomic) CLLocationCoordinate2D coordinate;
@property (readonly, nonatomic) NSString *label;
@property (readonly, nonatomic) NSInteger type;




@end


#endif