// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SXDOMMODIFIERMANAGER_H
#define SXDOMMODIFIERMANAGER_H

@class NSCache, NSString, NSMutableArray;
@protocol SXDOMModifierManager, SXLayoutProcessor, SXDOMFactory, SXDOMCacheKeyFactory, SXDOMModificationContextFactory;

#import <Foundation/Foundation.h>


@interface SXDOMModifierManager : NSObject <SXDOMModifierManager, SXLayoutProcessor>



@property (readonly, nonatomic) NSObject<SXDOMFactory> *DOMFactory; // ivar: _DOMFactory
@property (readonly, nonatomic) NSCache *cache; // ivar: _cache
@property (readonly, nonatomic) NSObject<SXDOMCacheKeyFactory> *cacheKeyFactory; // ivar: _cacheKeyFactory
@property (readonly, nonatomic) NSObject<SXDOMModificationContextFactory> *contextFactory; // ivar: _contextFactory
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSMutableArray *modifiers; // ivar: _modifiers
@property (readonly) Class superclass;


-(id)initWithDOMFactory:(id)arg0 contextFactory:(id)arg1 cacheKeyFactory:(id)arg2 ;
-(void)addModifier:(id)arg0 ;
-(void)processLayoutTask:(id)arg0 layoutBlueprint:(id)arg1 DOMObjectProvider:(id)arg2 ;


@end


#endif