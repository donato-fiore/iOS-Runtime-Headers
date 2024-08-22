// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AACOMPLETEEMAILVETTINGREQUEST_H
#define AACOMPLETEEMAILVETTINGREQUEST_H

@class NSString;


#import "AAEmailVettingRequest.h"

@interface AACompleteEmailVettingRequest : AAEmailVettingRequest {
    NSString *_token;
}




+(Class)responseClass;
-(id)bodyDictionary;
-(id)initWithAccount:(id)arg0 token:(id)arg1 ;
-(id)initWithURLString:(id)arg0 account:(id)arg1 token:(id)arg2 ;
-(id)urlString;


@end


#endif