// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef REPORTRAITPREDICTOR_H
#define REPORTRAITPREDICTOR_H

@class PPNamedEntityStore, NSMutableDictionary, NSDictionary;
@protocol REPortraitPredictorProperties;


#import "REPredictor.h"

@interface REPortraitPredictor : REPredictor <REPortraitPredictorProperties>

 {
    PPNamedEntityStore *_namedEntityStore;
    NSMutableDictionary *_namedEntityScores;
}


@property (readonly, nonatomic) NSDictionary *namedEntityScores;


+(CGFloat)updateInterval;
-(float)userAffinityToContent:(id)arg0 ;
-(id)_init;
-(void)_loadStoreIfNeeded;
-(void)dealloc;
-(void)update;


@end


#endif