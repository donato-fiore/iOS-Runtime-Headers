// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SSVACCOUNTLESSPLAYBACKOPERATION_H
#define SSVACCOUNTLESSPLAYBACKOPERATION_H

@class NSString, NSDictionary;


#import "SSVComplexOperation.h"

@interface SSVAccountLessPlaybackOperation : SSVComplexOperation {
    NSString *_assetStoreFrontIdentifier;
    NSString *_itemIdentifier;
    id *_responseBlock;
}


@property (copy, nonatomic) NSDictionary *HTTPHeaderFields; // ivar: _httpHeaderFields
@property (copy, nonatomic) NSString *assetStoreFrontIdentifier;
@property (copy) NSString *itemIdentifier;
@property (copy) id *responseBlock;


-(id)_requestBodyData;
-(id)valueForHTTPHeaderField:(id)arg0 ;
-(void)main;
-(void)setValue:(id)arg0 forHTTPHeaderField:(id)arg1 ;


@end


#endif