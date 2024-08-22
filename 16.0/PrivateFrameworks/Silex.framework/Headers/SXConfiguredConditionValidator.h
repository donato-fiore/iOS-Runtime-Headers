// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SXCONFIGUREDCONDITIONVALIDATOR_H
#define SXCONFIGUREDCONDITIONVALIDATOR_H

@class NSString;
@protocol SXConditionValidating, SXRenderingConfigurationProvider;

#import <Foundation/Foundation.h>


@interface SXConfiguredConditionValidator : NSObject <SXConditionValidating>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<SXRenderingConfigurationProvider> *renderingConfigurationProvider; // ivar: _renderingConfigurationProvider
@property (readonly) Class superclass;


-(BOOL)validateCondition:(id)arg0 context:(id)arg1 ;
-(id)initWithRenderingConfigurationProvider:(id)arg0 ;


@end


#endif