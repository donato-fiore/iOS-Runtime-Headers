// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef INEXECUTIONINFORESOLVER_H
#define INEXECUTIONINFORESOLVER_H

@class NSDictionary;

#import <Foundation/Foundation.h>

#import "INExecutionCounterpartMapper.h"
#import "INExecutionFrameworkMapper.h"

@interface INExecutionInfoResolver : NSObject

@property (readonly, nonatomic) INExecutionCounterpartMapper *_counterpartMapper; // ivar: _counterpartMapper
@property (readonly, copy, nonatomic) NSDictionary *_counterpartMapping; // ivar: __counterpartMapping
@property (readonly, nonatomic) INExecutionFrameworkMapper *_frameworkMapper; // ivar: _frameworkMapper


+(id)defaultResolver;
+(void)initialize;
-(id)_resolveExecutionInfo:(id)arg0 ;
-(id)_resolveExecutionInfoByLinkingExtensionToApp:(id)arg0 ;
-(id)_resolveExecutionInfoBySwappingIdentifiers:(id)arg0 ;
-(id)_resolveIntentExecutionInfoByLinkingExtensionToApp:(id)arg0 ;
-(id)_resolveIntentExecutionInfoBySwappingIdentifiers:(id)arg0 ;
-(id)_resolveIntentExecutionInfoUsingCounterparts:(id)arg0 ;
-(id)_resolveUserActivityExecutionInfoByLinkingFileProvidersToFilesApp:(id)arg0 ;
-(id)_resolveUserActivityExecutionInfoBySwappingIdentifiers:(id)arg0 ;
-(id)_resolveUserActivityExecutionInfoUsingCounterparts:(id)arg0 ;
-(id)counterpartBundleIdentifiersForBundleIdentifier:(id)arg0 ;
-(id)counterpartIdentifiersForLocalIdentifier:(id)arg0 ;
-(id)localIdentifiersForCounterpartIdentifier:(id)arg0 ;
-(id)resolveIntentExecutionInfo:(id)arg0 ;
-(id)resolveUserActivityExecutionInfo:(id)arg0 ;


@end


#endif