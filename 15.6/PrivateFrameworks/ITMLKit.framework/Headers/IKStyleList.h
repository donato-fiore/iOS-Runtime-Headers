// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IKSTYLELIST_H
#define IKSTYLELIST_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>

#import "IKStyleList.h"
#import "IKViewElementStyle.h"

@interface IKStyleList : NSObject

@property (readonly, retain, nonatomic) IKStyleList *baseStyleList; // ivar: _baseStyleList
@property (readonly, copy, nonatomic) NSString *classSelector; // ivar: _classSelector
@property (readonly, nonatomic) BOOL requiresMediaQueryEvaluation; // ivar: _requiresMediaQueryEvaluation
@property (nonatomic, getter=isResolutionDone) BOOL resolutionDone; // ivar: _resolutionDone
@property (retain, nonatomic) IKViewElementStyle *resolvedStyle; // ivar: _resolvedStyle
@property (readonly, copy, nonatomic) NSArray *styles; // ivar: _styles


-(id)initWithClassSelector:(id)arg0 styles:(id)arg1 baseStyleList:(id)arg2 ;
-(id)resolvedStyleWithMediaQueryEvaluator:(id)arg0 ;
-(void)_resolveWithMediaQueryEvaluator:(id)arg0 ;
-(void)setNeedsReresolution;


@end


#endif