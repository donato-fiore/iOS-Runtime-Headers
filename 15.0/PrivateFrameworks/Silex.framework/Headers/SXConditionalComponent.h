// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SXCONDITIONALCOMPONENT_H
#define SXCONDITIONALCOMPONENT_H

@class NSString;
@protocol SXConditional;


#import "SXComponent.h"
#import "SXJSONArray.h"

@interface SXConditionalComponent : SXComponent <SXConditional>



@property (readonly, nonatomic) SXJSONArray *conditions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)valueClassBlockForPropertyWithName:(SEL)arg0 ;


@end


#endif