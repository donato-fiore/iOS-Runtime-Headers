// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NLPMODELTRAININGDATAPROVIDER_H
#define NLPMODELTRAININGDATAPROVIDER_H



#import "NLDataProvider.h"

@interface NLPModelTrainingDataProvider : NLDataProvider {
    NSUInteger _numberOfInstances;
    *void _dataSource;
    id *_instanceDataProvider;
}




-(NSUInteger)numberOfInstances;
-(id)initWithConfiguration:(id)arg0 numberOfInstances:(NSUInteger)arg1 dataSource:(*void)arg2 instanceDataProvider:(id)arg3 ;
-(id)instanceAtIndex:(NSUInteger)arg0 ;


@end


#endif