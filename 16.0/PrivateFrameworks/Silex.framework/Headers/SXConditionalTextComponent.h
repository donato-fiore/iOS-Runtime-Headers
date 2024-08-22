// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SXCONDITIONALTEXTCOMPONENT_H
#define SXCONDITIONALTEXTCOMPONENT_H

@class NSString;
@protocol SXConditional;


#import "SXTextComponent.h"
#import "SXJSONArray.h"

@interface SXConditionalTextComponent : SXTextComponent <SXConditional>



@property (readonly, nonatomic) SXJSONArray *conditions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)valueClassBlockForPropertyWithName:(SEL)arg0 ;


@end


#endif