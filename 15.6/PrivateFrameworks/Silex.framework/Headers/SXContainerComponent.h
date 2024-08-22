// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SXCONTAINERCOMPONENT_H
#define SXCONTAINERCOMPONENT_H

@protocol SXContentDisplay;


#import "SXComponent.h"
#import "SXJSONArray.h"

@interface SXContainerComponent : SXComponent

@property (readonly, nonatomic) SXJSONArray *allComponents;
@property (readonly, nonatomic) BOOL allowAutoplacedAds;
@property (readonly, nonatomic) SXJSONArray *components;
@property (readonly, nonatomic) NSObject<SXContentDisplay> *contentDisplay;


+(Class)classForProtocolProperty:(id)arg0 withValue:(id)arg1 ;
+(id)objectValueClassBlockForPropertyWithName:(SEL)arg0 ;
+(id)purgeClassBlockForPropertyWithName:(SEL)arg0 ;
+(id)typeString;
-(BOOL)allowAutoplacedAdsWithValue:(id)arg0 withType:(int)arg1 ;


@end


#endif