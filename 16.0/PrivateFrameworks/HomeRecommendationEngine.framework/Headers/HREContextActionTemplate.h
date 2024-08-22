// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HRECONTEXTACTIONTEMPLATE_H
#define HRECONTEXTACTIONTEMPLATE_H

@class NSString;
@protocol HFIconDescriptor;


#import "HREActionTemplate.h"

@interface HREContextActionTemplate : HREActionTemplate

@property (retain, nonatomic) NSString *contextActionName; // ivar: _contextActionName
@property (retain, nonatomic) NSObject<HFIconDescriptor> *iconDescriptor; // ivar: _iconDescriptor


-(Class)recommendationClass;
-(id)createStarterRecommendationInHome:(id)arg0 ;


@end


#endif