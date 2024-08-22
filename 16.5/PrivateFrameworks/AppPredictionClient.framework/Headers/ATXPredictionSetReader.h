// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXPREDICTIONSETREADER_H
#define ATXPREDICTIONSETREADER_H

@class NSData;

#import <Foundation/Foundation.h>


@interface ATXPredictionSetReader : NSObject {
    NSData *_data;
    Class _predictedItemClass;
    char * _perPredictionDataStart;
    int _predictionCount;
}




+(id)actionReader:(id)arg0 ;
+(id)bundleIdReader:(id)arg0 ;
-(id)_scoredPredictionFromData:(id)arg0 score:(float)arg1 ;
-(id)init;
-(id)initWithData:(id)arg0 predictedItemClass:(Class)arg1 ;
-(id)readScoredPredictionsWithLimit:(int)arg0 ;
-(id)readScoredPredictionsWithLimit:(int)arg0 filterPredicate:(id)arg1 ;


@end


#endif