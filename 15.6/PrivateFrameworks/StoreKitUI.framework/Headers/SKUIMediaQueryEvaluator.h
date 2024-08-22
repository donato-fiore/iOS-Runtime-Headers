// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKUIMEDIAQUERYEVALUATOR_H
#define SKUIMEDIAQUERYEVALUATOR_H

@class NSMapTable, NSMutableSet;
@protocol OS_dispatch_source, SKUIMediaQueryDelegate;

#import <Foundation/Foundation.h>


@interface SKUIMediaQueryEvaluator : NSObject {
    NSMapTable *_cachedFeatureResults;
    NSMutableSet *_observedNotificationNames;
    NSObject<OS_dispatch_source> *_reloadTimer;
}


@property (weak, nonatomic) NSObject<SKUIMediaQueryDelegate> *delegate; // ivar: _delegate


+(void)initialize;
+(void)registerFeatureClass:(Class)arg0 ;
-(BOOL)evaluateMediaQuery:(id)arg0 ;
-(id)_delegateValuesForKeys:(id)arg0 ;
-(id)init;
-(void)_featureDidChangeNotification:(id)arg0 ;
-(void)dealloc;
-(void)reloadData;


@end


#endif