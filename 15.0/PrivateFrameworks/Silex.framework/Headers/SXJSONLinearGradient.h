// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SXJSONLINEARGRADIENT_H
#define SXJSONLINEARGRADIENT_H



#import "SXJSONObject.h"
#import "SXJSONArray.h"

@interface SXJSONLinearGradient : SXJSONObject

@property (readonly, nonatomic) CGFloat angle;
@property (readonly, nonatomic) SXJSONArray *colorStops;


+(id)valueClassBlockForPropertyWithName:(SEL)arg0 ;


@end


#endif