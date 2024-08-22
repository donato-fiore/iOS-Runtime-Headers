// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXSTORYPERSISTEDSTYLEPRODUCER_H
#define PXSTORYPERSISTEDSTYLEPRODUCER_H

@protocol PXStoryStylesProducer, OS_os_log, PXStoryAutoEditDecisionList, PFStoryRecipe, PXStorySongResource;

#import <Foundation/Foundation.h>


@interface PXStoryPersistedStyleProducer : NSObject <PXStoryStylesProducer>

 {
    NSObject<OS_os_log> *_log;
}


@property (readonly, copy, nonatomic) NSObject<PXStoryAutoEditDecisionList> *autoEditDecisionList; // ivar: _autoEditDecisionList
@property (readonly, nonatomic) NSObject<PFStoryRecipe> *persistedRecipe; // ivar: _persistedRecipe
@property (readonly, nonatomic) NSObject<PXStorySongResource> *songResource; // ivar: _songResource


-(id)initWithPersistedRecipe:(id)arg0 songResource:(id)arg1 autoEditDecisionList:(id)arg2 ;
-(id)requestStylesWithOptions:(NSUInteger)arg0 resultHandler:(id)arg1 ;


@end


#endif