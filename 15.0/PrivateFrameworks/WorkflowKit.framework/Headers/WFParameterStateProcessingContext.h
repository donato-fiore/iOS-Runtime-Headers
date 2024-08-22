// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFPARAMETERSTATEPROCESSINGCONTEXT_H
#define WFPARAMETERSTATEPROCESSINGCONTEXT_H

@class NSString;
@protocol WFActionSandboxExtensionProvider, WFVariableDataSource;

#import <Foundation/Foundation.h>

#import "WFContentAttributionTracker.h"
#import "WFParameter.h"

@interface WFParameterStateProcessingContext : NSObject

@property (readonly, nonatomic) NSObject<WFActionSandboxExtensionProvider> *actionSandboxExtensionProvider; // ivar: _actionSandboxExtensionProvider
@property (readonly, nonatomic) WFContentAttributionTracker *contentAttributionTracker; // ivar: _contentAttributionTracker
@property (readonly, nonatomic) NSInteger environment; // ivar: _environment
@property (readonly, nonatomic) BOOL isInputParameter; // ivar: _isInputParameter
@property (readonly, nonatomic) NSInteger maximumItemCount; // ivar: _maximumItemCount
@property (readonly, nonatomic) WFParameter *parameter; // ivar: _parameter
@property (readonly, nonatomic) NSObject<WFVariableDataSource> *variableSource; // ivar: _variableSource
@property (readonly, nonatomic) NSString *widgetSizeClass; // ivar: _widgetSizeClass


-(id)initWithVariableSource:(id)arg0 actionSandboxExtensionProvider:(id)arg1 parameter:(id)arg2 isInputParameter:(BOOL)arg3 environment:(NSInteger)arg4 contentAttributionTracker:(id)arg5 widgetSizeClass:(id)arg6 ;
-(void)addContentAttributionSet:(id)arg0 ;
-(void)requestRunningActionSandboxExtensionForAccessResources:(id)arg0 completion:(id)arg1 ;


@end


#endif