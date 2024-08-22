// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTSEARCHREQUEST_H
#define MTSEARCHREQUEST_H

@protocol MTMAPIRequest;


#import "MTBaseMAPIRequest.h"

@interface MTSearchRequest : MTBaseMAPIRequest <MTMAPIRequest>

 {
    ? contentTypes;
    ? limit;
    ? term;
}




-(id)init;
-(id)initWithTerm:(id)arg0 contentTypes:(id)arg1 ;
-(void)performWithCompletion:(id)arg0 ;
-(void)setLimit:(NSInteger)arg0 ;


@end


#endif