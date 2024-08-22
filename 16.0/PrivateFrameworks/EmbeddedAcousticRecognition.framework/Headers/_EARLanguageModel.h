// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _EARLANGUAGEMODEL_H
#define _EARLANGUAGEMODEL_H


#import <Foundation/Foundation.h>


@interface _EARLanguageModel : NSObject {
    vector<std::pair<id<_EARLanguageModelDataSource>, float>, std::allocator<std::pair<id<_EARLanguageModelDataSource>, float>>> _dataSources;
}


@property (readonly, nonatomic) float totalWeight; // ivar: _totalWeight


-(void)addDataSource:(id)arg0 weight:(float)arg1 ;
-(void)enumerateDataSourcesAndWeightsUsingBlock:(id)arg0 ;


@end


#endif