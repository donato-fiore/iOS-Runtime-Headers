// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AAICLOUDTERMSAGREERESPONSE_H
#define AAICLOUDTERMSAGREERESPONSE_H

@class NSDictionary;


#import "AAResponse.h"

@interface AAiCloudTermsAgreeResponse : AAResponse {
    NSDictionary *_acceptedTermsInfo;
}


@property (readonly, nonatomic) NSDictionary *acceptedTermsInfo;




@end


#endif