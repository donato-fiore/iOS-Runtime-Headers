// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SXADVERTISEMENTPLACEMENTTYPE_H
#define SXADVERTISEMENTPLACEMENTTYPE_H

@class NSString;
@protocol SXAdvertisementPlacementType, SXAutoPlacementLayout;


#import "SXJSONObject.h"
#import "SXJSONArray.h"

@interface SXAdvertisementPlacementType : SXJSONObject <SXAdvertisementPlacementType>



@property (readonly, nonatomic) NSUInteger bannerType;
@property (readonly, nonatomic) SXJSONArray *conditional;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) _SXConvertibleValue distanceFromMedia;
@property (readonly, nonatomic) BOOL enabled;
@property (readonly, nonatomic) NSUInteger frequency;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<SXAutoPlacementLayout> *layout;
@property (readonly) Class superclass;


+(Class)classForProtocolProperty:(id)arg0 withValue:(id)arg1 ;
+(id)valueClassBlockForPropertyWithName:(SEL)arg0 ;
-(NSUInteger)bannerTypeWithValue:(id)arg0 withType:(int)arg1 ;


@end


#endif