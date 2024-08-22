// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SXMAPCOMPONENT_H
#define SXMAPCOMPONENT_H

@class NSString;


#import "SXComponent.h"
#import "SXJSONArray.h"

@interface SXMapComponent : SXComponent

@property (readonly, nonatomic) NSString *accessibilityCaption;
@property (readonly, nonatomic) NSString *caption;
@property (readonly, nonatomic) NSUInteger defaultMapType;
@property (readonly, nonatomic) SXJSONArray *items;
@property (readonly, nonatomic) ? region;


+(id)typeString;
+(id)valueClassBlockForPropertyWithName:(SEL)arg0 ;
-(NSUInteger)defaultMapTypeWithValue:(id)arg0 withType:(int)arg1 ;


@end


#endif