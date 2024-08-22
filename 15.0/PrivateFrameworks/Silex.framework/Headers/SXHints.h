// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SXHINTS_H
#define SXHINTS_H

@class NSString;
@protocol SXHints, SXConditionalHints, SXConditionHints;


#import "SXJSONObject.h"

@interface SXHints : SXJSONObject <SXHints>



@property (readonly, nonatomic) NSObject<SXConditionalHints> *conditionals;
@property (readonly, nonatomic) NSObject<SXConditionHints> *conditions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(Class)classForProtocolProperty:(id)arg0 withValue:(id)arg1 ;


@end


#endif