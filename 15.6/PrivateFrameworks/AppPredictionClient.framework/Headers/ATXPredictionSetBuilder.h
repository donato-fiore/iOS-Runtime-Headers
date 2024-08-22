// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXPREDICTIONSETBUILDER_H
#define ATXPREDICTIONSETBUILDER_H

@class NSMutableData;

#import <Foundation/Foundation.h>


@interface ATXPredictionSetBuilder : NSObject {
    NSMutableData *_data;
    int _predictionCount;
    BOOL _finished;
}




-(id)finish;
-(id)init;
-(void)recordPrediction:(id)arg0 score:(float)arg1 ;


@end


#endif