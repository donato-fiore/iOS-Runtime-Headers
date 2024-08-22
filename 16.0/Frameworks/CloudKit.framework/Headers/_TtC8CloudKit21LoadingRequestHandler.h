// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC8CLOUDKIT21LOADINGREQUESTHANDLER_H
#define _TTC8CLOUDKIT21LOADINGREQUESTHANDLER_H

@protocol AVAssetResourceLoaderDelegate;

#import <Foundation/Foundation.h>


@interface _TtC8CloudKit21LoadingRequestHandler : NSObject <AVAssetResourceLoaderDelegate>

 {
    ? assetStreamHandle;
    ? type;
    ? taskByRequest;
}




-(BOOL)resourceLoader:(id)arg0 shouldWaitForLoadingOfRequestedResource:(id)arg1 ;
-(BOOL)resourceLoader:(id)arg0 shouldWaitForRenewalOfRequestedResource:(id)arg1 ;
-(BOOL)resourceLoader:(id)arg0 shouldWaitForResponseToAuthenticationChallenge:(id)arg1 ;
-(id)init;
-(void)resourceLoader:(id)arg0 didCancelAuthenticationChallenge:(id)arg1 ;
-(void)resourceLoader:(id)arg0 didCancelLoadingRequest:(id)arg1 ;


@end


#endif