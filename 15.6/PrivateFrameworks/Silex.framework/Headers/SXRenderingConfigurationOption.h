// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SXRENDERINGCONFIGURATIONOPTION_H
#define SXRENDERINGCONFIGURATIONOPTION_H

@class NSString;
@protocol SXRenderingConfigurationOption;


#import "SXJSONObject.h"

@interface SXRenderingConfigurationOption : SXJSONObject <SXRenderingConfigurationOption>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *maxClientSpecVersion;
@property (readonly, nonatomic) NSString *maxDocumentSpecVersion;
@property (readonly, nonatomic) NSString *minClientSpecVersion;
@property (readonly, nonatomic) NSString *minDocumentSpecVersion;
@property (readonly) Class superclass;




@end


#endif