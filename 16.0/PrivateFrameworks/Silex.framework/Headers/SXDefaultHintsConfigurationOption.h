// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SXDEFAULTHINTSCONFIGURATIONOPTION_H
#define SXDEFAULTHINTSCONFIGURATIONOPTION_H

@class NSString;
@protocol SXHintsConfigurationOption;

#import <Foundation/Foundation.h>


@interface SXDefaultHintsConfigurationOption : NSObject <SXHintsConfigurationOption>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL ignoreConditionHints;
@property (readonly, nonatomic) BOOL ignoreConditionalHints;
@property (readonly) Class superclass;




@end


#endif