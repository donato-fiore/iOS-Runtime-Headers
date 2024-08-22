// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICINAPPREPORTEVENTREQUEST_H
#define ICINAPPREPORTEVENTREQUEST_H

@class NSString, NSDictionary;


#import "ICRequestOperation.h"
#import "ICStoreRequestContext.h"

@interface ICInAppReportEventRequest : ICRequestOperation {
    ICStoreRequestContext *_storeRequestContext;
    NSString *_messageIdentifier;
    NSDictionary *_params;
}




-(id)initWithStoreRequestContext:(id)arg0 messageIdentifier:(id)arg1 params:(id)arg2 ;
-(void)execute;
-(void)performRequestWithResponseHandler:(id)arg0 ;


@end


#endif