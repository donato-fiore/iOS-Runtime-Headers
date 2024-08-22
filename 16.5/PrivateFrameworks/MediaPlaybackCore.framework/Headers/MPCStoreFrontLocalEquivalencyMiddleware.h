// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPCSTOREFRONTLOCALEQUIVALENCYMIDDLEWARE_H
#define MPCSTOREFRONTLOCALEQUIVALENCYMIDDLEWARE_H

@class NSString, NSArray, MPModelGenericObject, NSIndexPath;
@protocol MPCPlayerResponseBuilder, MPMiddleware;

#import <Foundation/Foundation.h>


@interface MPCStoreFrontLocalEquivalencyMiddleware : NSObject <MPCPlayerResponseBuilder, MPMiddleware>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *invalidationObservers; // ivar: _invalidationObservers
@property (retain, nonatomic) MPModelGenericObject *overridePlayingItem; // ivar: _overridePlayingItem
@property (copy, nonatomic) NSIndexPath *playingItemIndexPath; // ivar: _playingItemIndexPath
@property (readonly) Class superclass;
@property (readonly) Class superclass;


-(id)_stateDumpObject;
-(id)operationsForPlayerRequest:(id)arg0 ;
-(id)operationsForRequest:(id)arg0 ;
-(id)playerModelObject:(id)arg0 propertySet:(id)arg1 atIndexPath:(id)arg2 chain:(id)arg3 ;


@end


#endif