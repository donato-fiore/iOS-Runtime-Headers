// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBUILEGIBILITYDEFAULTENGINE_H
#define SBUILEGIBILITYDEFAULTENGINE_H

@class NSString, NSOperationQueue;
@protocol SBUILegibilityEngine;

#import <Foundation/Foundation.h>

#import "SBUILegibilityCache.h"

@interface SBUILegibilityDefaultEngine : NSObject <SBUILegibilityEngine>

 {
    SBUILegibilityCache *_legibilityCache;
    NSString *_engineIdentifier;
    NSOperationQueue *_asyncOperationQueue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (nonatomic) BOOL useMinFillHeightForTemplateGeneration; // ivar: _useMinFillHeightForTemplateGeneration


+(id)defaultEngine;
-(id)applyStrength:(CGFloat)arg0 toImage:(id)arg1 settings:(id)arg2 ;
-(id)executeAsyncLegibilityUpdateForContainer:(id)arg0 image:(id)arg1 settings:(id)arg2 strength:(*CGFloat)arg3 completion:(id)arg4 ;
-(id)initWithEngineIdentifier:(id)arg0 ;
-(struct CGSize )calculateShadowImageViewSizeForOriginalImage:(id)arg0 shadowImage:(id)arg1 settings:(id)arg2 ;
-(void)_teardownCaches:(id)arg0 ;
-(void)executeLegibilityUpdateForContainer:(id)arg0 forImage:(id)arg1 settings:(id)arg2 strength:(*CGFloat)arg3 engineResult:(struct ? *)arg4 ;
-(void)prewarmForSettings:(id)arg0 maxSize:(struct CGSize )arg1 minSize:(struct CGSize )arg2 scale:(CGFloat)arg3 ;


@end


#endif