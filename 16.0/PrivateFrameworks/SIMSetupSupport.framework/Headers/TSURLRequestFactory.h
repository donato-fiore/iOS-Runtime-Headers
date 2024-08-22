// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSURLREQUESTFACTORY_H
#define TSURLREQUESTFACTORY_H


#import <Foundation/Foundation.h>


@interface TSURLRequestFactory : NSObject



+(id)_jsonBodyWithPostdata:(id)arg0 ;
+(id)_urlEncodedBodyWithCarrierPostRawData:(id)arg0 ;
+(id)_urlEncodedBodyWithPostdata:(id)arg0 ;
+(void)requestWithType:(NSUInteger)arg0 URL:(id)arg1 postdata:(id)arg2 completionHandler:(id)arg3 ;


@end


#endif