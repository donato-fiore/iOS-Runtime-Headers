// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTRECOMMENDATIONMODULECONTENTREQUEST_H
#define MTRECOMMENDATIONMODULECONTENTREQUEST_H

@protocol MTMAPIRequest;


#import "MTBaseMAPIRequest.h"

@interface MTRecommendationModuleContentRequest : MTBaseMAPIRequest <MTMAPIRequest>

 {
    ? moduleID;
}




-(id)init;
-(id)initWithModuleID:(id)arg0 ;
-(void)performWithCompletion:(id)arg0 ;


@end


#endif