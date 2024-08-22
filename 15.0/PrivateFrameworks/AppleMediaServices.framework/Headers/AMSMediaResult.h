// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AMSMEDIARESULT_H
#define AMSMEDIARESULT_H

@class NSArray, NSDictionary;


#import "AMSURLResult.h"

@interface AMSMediaResult : AMSURLResult

@property (readonly, nonatomic) NSArray *responseDataItems;
@property (readonly, nonatomic) NSDictionary *responseDictionary; // ivar: _responseDictionary


-(id)initWithResult:(id)arg0 ;


@end


#endif