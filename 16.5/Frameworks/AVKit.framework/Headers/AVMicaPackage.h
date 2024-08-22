// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVMICAPACKAGE_H
#define AVMICAPACKAGE_H

@class NSString, CALayer, CAStateController;
@protocol CAMLParserDelegate, CAStateControllerDelegate;

#import <Foundation/Foundation.h>


@interface AVMicaPackage : NSObject <CAMLParserDelegate, CAStateControllerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger layoutDirection; // ivar: _layoutDirection
@property (readonly, nonatomic) NSString *packageName; // ivar: _packageName
@property (retain, nonatomic) CALayer *rootLayer; // ivar: _rootLayer
@property (readonly, copy, nonatomic) NSString *state; // ivar: _state
@property (readonly, nonatomic) CAStateController *stateController; // ivar: _stateController
@property (readonly) Class superclass;
@property (nonatomic) CGSize targetSize; // ivar: _targetSize
@property (nonatomic) CGSize unscaledSize; // ivar: _unscaledSize


+(id)classSubstitions;
+(void)asynchronouslyPrepareMicaPackageWithName:(id)arg0 layoutDirection:(NSInteger)arg1 completion:(id)arg2 ;
-(Class)CAMLParser:(id)arg0 didFailToFindClassWithName:(id)arg1 ;
-(id)_recursivelyFindSublayerWithName:(id)arg0 rootLayer:(id)arg1 ;
-(id)availableStates;
-(id)availableStatesOnLayer:(id)arg0 ;
-(id)initWithPackageName:(id)arg0 layoutDirection:(NSInteger)arg1 ;
-(id)sublayerWithName:(id)arg0 ;
-(void)_loadRootLayerIfNeeded;
-(void)_recursivelyRemoveCompositingFiltersWithName:(id)arg0 rootLayer:(id)arg1 ;
-(void)_recursivelySetFillColor:(struct CGColor *)arg0 rootLayer:(id)arg1 ;
-(void)removeCompositingFiltersWithName:(id)arg0 ;
-(void)transitionToStateWithName:(id)arg0 ;
-(void)transitionToStateWithName:(id)arg0 onLayer:(id)arg1 ;


@end


#endif