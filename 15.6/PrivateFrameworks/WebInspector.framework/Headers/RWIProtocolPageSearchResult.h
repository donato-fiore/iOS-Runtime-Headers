// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RWIPROTOCOLPAGESEARCHRESULT_H
#define RWIPROTOCOLPAGESEARCHRESULT_H

@class NSString;


#import "RWIProtocolJSONObject.h"

@interface RWIProtocolPageSearchResult : RWIProtocolJSONObject

@property (copy, nonatomic) NSString *frameId;
@property (nonatomic) CGFloat matchesCount;
@property (copy, nonatomic) NSString *requestId;
@property (copy, nonatomic) NSString *url;


-(id)initWithUrl:(id)arg0 frameId:(id)arg1 matchesCount:(CGFloat)arg2 ;


@end


#endif