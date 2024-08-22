// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SGMIMODELSTORE_H
#define SGMIMODELSTORE_H


#import <Foundation/Foundation.h>

#import "SGSqlEntityStore.h"

@interface SGMIModelStore : NSObject

@property (readonly) SGSqlEntityStore *store; // ivar: _store


+(id)defaultStore;
-(id)initWithStore:(id)arg0 ;
-(id)naiveBayesModelQueryResultForFeature:(NSInteger)arg0 unigramTokens:(id)arg1 bigramTokens:(id)arg2 ;
-(void)commitNaiveBayesModel:(id)arg0 probabilityFeatureName:(NSInteger)arg1 ;


@end


#endif