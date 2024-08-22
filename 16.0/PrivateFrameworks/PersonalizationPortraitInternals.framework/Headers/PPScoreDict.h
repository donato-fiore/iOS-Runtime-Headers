// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PPSCOREDICT_H
#define PPSCOREDICT_H

@class NSMutableArray, NSSet;
@protocol MLFeatureProvider;

#import <Foundation/Foundation.h>

#import "PPBaseScoreInputSet.h"

@interface PPScoreDict : NSObject <MLFeatureProvider>

 {
    PPBaseScoreInputSet *_scoreInputSet;
    unique_ptr<std::vector<float>, std::default_delete<std::vector<float>>> _scalarValueStorage;
    unique_ptr<std::vector<std::shared_ptr<std::vector<float>>>, std::default_delete<std::vector<std::shared_ptr<std::vector<float>>>>> _arrayValueStorage;
    NSMutableArray *_objectStorage;
}


@property (readonly, nonatomic) NSSet *featureNames;


-(NSUInteger)arrayValueCount;
-(NSUInteger)objectCount;
-(NSUInteger)scalarValueCount;
-(float)scalarValueForIndex:(NSUInteger)arg0 ;
-(id)arrayValueDictionary;
-(id)arrayValueForIndex:(NSUInteger)arg0 ;
-(id)description;
-(id)featureValueForName:(id)arg0 ;
-(id)init;
-(id)initWithScalarValueCount:(NSUInteger)arg0 arrayValueCount:(NSUInteger)arg1 objectCount:(NSUInteger)arg2 ;
-(id)initWithScoreInputSet:(id)arg0 ;
-(id)objectDictionary;
-(id)objectForIndex:(NSUInteger)arg0 ;
-(id)scalarValueDictionary;
-(struct shared_ptr<std::vector<float>> )arraySharedPtrForIndex:(NSUInteger)arg0 ;
-(void)setArraySharedPtr:(struct shared_ptr<std::vector<float>> )arg0 forIndex:(NSUInteger)arg1 ;
-(void)setArrayStorage:(*void)arg0 forIndex:(NSUInteger)arg1 ;
-(void)setArrayValue:(id)arg0 forIndex:(NSUInteger)arg1 ;
-(void)setObject:(id)arg0 forIndex:(NSUInteger)arg1 ;
-(void)setScalarValue:(float)arg0 forIndex:(NSUInteger)arg1 ;


@end


#endif