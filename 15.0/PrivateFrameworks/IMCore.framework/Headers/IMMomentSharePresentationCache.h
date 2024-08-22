// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IMMOMENTSHAREPRESENTATIONCACHE_H
#define IMMOMENTSHAREPRESENTATIONCACHE_H

@class NSMutableDictionary, NSString;
@protocol PXChangeObserver, IMMomentSharePresentationCacheDelegate;

#import <Foundation/Foundation.h>

#import "IMMomentShareCache.h"

@interface IMMomentSharePresentationCache : NSObject <PXChangeObserver>

 {
    NSMutableDictionary *_cache;
    IMMomentShareCache *_momentShareCache;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<IMMomentSharePresentationCacheDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(id)initWithMomentShareCache:(id)arg0 ;
-(id)statusPresentationForMomentShareURLString:(id)arg0 ;
-(void)_momentShareCacheDidChange:(id)arg0 ;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)registerMomentShareItemForMessage:(id)arg0 ;
-(void)registerMomentShareURLString:(id)arg0 ;


@end


#endif