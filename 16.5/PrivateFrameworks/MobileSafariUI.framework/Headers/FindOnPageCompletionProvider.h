// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FINDONPAGECOMPLETIONPROVIDER_H
#define FINDONPAGECOMPLETIONPROVIDER_H

@protocol FindOnPageCompletionProviderDataSource;


#import "CompletionProvider.h"

@interface FindOnPageCompletionProvider : CompletionProvider

@property (weak, nonatomic) NSObject<FindOnPageCompletionProviderDataSource> *dataSource; // ivar: _dataSource
@property (readonly, nonatomic) NSInteger parsecQueryID; // ivar: _parsecQueryID


-(id)completionsForQuery:(id)arg0 ;
-(void)setQueryToComplete:(id)arg0 ;


@end


#endif