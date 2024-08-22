// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DATASOURCEINFERENCE_H
#define DATASOURCEINFERENCE_H

@class NSString;
@protocol ETDataProvider;

#import <Foundation/Foundation.h>


@interface DataSourceInference : NSObject <ETDataProvider>

 {
    vector<std::vector<float>, std::allocator<std::vector<float>>> _contextData;
    vector<std::vector<float>, std::allocator<std::vector<float>>> _targetData;
    NSUInteger _sequenceLength;
    NSString *_contextKey;
    NSString *_targetKey;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSUInteger)numberOfDataPoints;
-(id)dataPointAtIndex:(NSUInteger)arg0 error:(*id)arg1 ;
-(id)init;
-(id)initWithLength:(NSUInteger)arg0 contextKey:(id)arg1 targetKey:(id)arg2 ;
-(void)setVectorsWithProcessor:(id)arg0 ;


@end


#endif