// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFOBSERVABLEARRAYRESULT_H
#define WFOBSERVABLEARRAYRESULT_H

@class NSArray;


#import "WFObservableResult.h"
#import "WFResultQuery.h"
#import "WFCoreDataResultState.h"

@interface WFObservableArrayResult : WFObservableResult

@property (readonly, nonatomic) WFResultQuery *query; // ivar: _query
@property (copy, nonatomic) WFCoreDataResultState *resultState; // ivar: _resultState
@property (readonly, nonatomic) NSArray *values; // ivar: _values


+(id)getEmptyResultWithQuery:(id)arg0 valueType:(Class)arg1 glyphSize:(struct CGSize )arg2 ;
+(id)getResultWithQuery:(id)arg0 valueType:(Class)arg1 glyphSize:(struct CGSize )arg2 error:(*id)arg3 ;
+(void)getResultWithQuery:(id)arg0 valueType:(Class)arg1 glyphSize:(struct CGSize )arg2 completionHandler:(id)arg3 ;
-(id)description;
-(id)initWithValueType:(Class)arg0 glyphSize:(struct CGSize )arg1 initialValues:(id)arg2 query:(id)arg3 resultState:(id)arg4 ;
-(void)handleChangeNotification:(id)arg0 ;


@end


#endif