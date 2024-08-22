// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef INAPPRESOLVER_H
#define INAPPRESOLVER_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "INExecutionCounterpartMapper.h"
#import "INExecutionFrameworkMapper.h"
#import "INSystemAppMapper.h"
#import "INAppResolverOptions.h"

@interface INAppResolver : NSObject

@property (readonly, nonatomic) INExecutionCounterpartMapper *_counterpartMapper; // ivar: _counterpartMapper
@property (readonly, nonatomic) INExecutionFrameworkMapper *_frameworkMapper; // ivar: _frameworkMapper
@property (readonly, nonatomic) INSystemAppMapper *_systemAppMapper; // ivar: _systemAppMapper
@property (readonly, nonatomic) os_unfair_lock_s cacheLock; // ivar: _cacheLock
@property (readonly, nonatomic) NSMutableDictionary *cachedResults; // ivar: _cachedResults
@property (readonly, nonatomic) INAppResolverOptions *globalOptions; // ivar: _globalOptions
@property (readonly, nonatomic) NSMutableDictionary *intentClassNameToResolverOptions; // ivar: _intentClassNameToResolverOptions
@property (readonly, nonatomic) os_unfair_lock_s resolverOptionsLock; // ivar: _resolverOptionsLock


+(id)sharedResolver;
+(void)initialize;
-(BOOL)cacheHasResultForDescriptor:(id)arg0 ;
-(id)_optionsForIntentClassName:(id)arg0 ;
-(id)_resolvedAppMatchingDescriptor:(id)arg0 ;
-(id)_resolvedIntentMatchingDescriptor:(id)arg0 ;
-(id)_resolvedUserActivityMatchingDescriptor:(id)arg0 ;
-(id)cachedResultForKey:(id)arg0 ;
-(id)counterpartIdentifiersForLocalIdentifier:(id)arg0 ;
-(id)init;
-(id)localIdentifiersForCounterpartIdentifier:(id)arg0 ;
-(id)optionsForCurrentContextWithIntentClassName:(id)arg0 ;
-(id)resolveDescriptorByLinkingFileProvidersToFilesApp:(id)arg0 ;
-(id)resolveDescriptorBySwappingIdentifiersWithExtensionIfApplicable:(id)arg0 ;
-(id)resolvedAppMatchingDescriptor:(id)arg0 ;
-(id)resolvedIntentMatchingDescriptor:(id)arg0 ;
-(id)resolvedUserActivityMatchingDescriptor:(id)arg0 ;
-(void)cacheResult:(id)arg0 forDescriptor:(id)arg1 ;
-(void)dealloc;
-(void)installedApplicationsDidChange:(id)arg0 ;
-(void)invalidateCache;
-(void)setOptions:(id)arg0 ;
-(void)setOptions:(id)arg0 forIntentClassName:(id)arg1 ;


@end


#endif