// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _BCUCOVEREFFECTSSERIESSTACK_H
#define _BCUCOVEREFFECTSSERIESSTACK_H

@class NSString;
@protocol BCUSeriesCoverEffectsFilter;

#import <Foundation/Foundation.h>

#import "BCULayerRenderer.h"

@interface _BCUCoverEffectsSeriesStack : NSObject <BCUSeriesCoverEffectsFilter>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) BCULayerRenderer *renderer; // ivar: _renderer
@property (readonly) Class superclass;


-(id)_stackLayerWithImages:(id)arg0 filters:(id)arg1 size:(struct CGSize )arg2 contentsScale:(CGFloat)arg3 insets:(struct UIEdgeInsets *)arg4 path:(struct CGPath **)arg5 ;
-(id)initWithIdentifier:(id)arg0 renderer:(id)arg1 ;
-(id)newOperationWithImages:(id)arg0 filters:(id)arg1 size:(struct CGSize )arg2 contentsScale:(CGFloat)arg3 waitForCPUSynchronization:(BOOL)arg4 completion:(id)arg5 ;


@end


#endif