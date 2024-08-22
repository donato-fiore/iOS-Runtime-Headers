// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WLKSIRISEARCHREQUEST_H
#define WLKSIRISEARCHREQUEST_H

@class NSDictionary;


#import "WLKRequest.h"

@interface WLKSiriSearchRequest : WLKRequest

@property (readonly, copy, nonatomic) NSDictionary *query; // ivar: _query


-(id)initWithQuery:(id)arg0 ;
-(void)makeRequestWithCompletion:(id)arg0 ;


@end


#endif