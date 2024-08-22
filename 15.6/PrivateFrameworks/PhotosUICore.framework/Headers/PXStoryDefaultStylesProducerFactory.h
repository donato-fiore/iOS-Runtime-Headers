// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXSTORYDEFAULTSTYLESPRODUCERFACTORY_H
#define PXSTORYDEFAULTSTYLESPRODUCERFACTORY_H

@protocol PXStoryStylesProducerFactory;

#import <Foundation/Foundation.h>


@interface PXStoryDefaultStylesProducerFactory : NSObject <PXStoryStylesProducerFactory>





-(id)initialStyleProducerForAssetCollection:(id)arg0 ;
-(id)initialStyleProducerForPersistableRecipe:(id)arg0 songResource:(id)arg1 autoEditDecisionList:(id)arg2 ;
-(id)stylesProducerForAutoEditDecisionLists:(id)arg0 ;


@end


#endif