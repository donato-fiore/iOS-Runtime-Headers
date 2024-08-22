// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVASSETRESOURCELOADINGREQUESTOR_H
#define AVASSETRESOURCELOADINGREQUESTOR_H


#import <Foundation/Foundation.h>

#import "AVAssetResourceLoadingRequestorInternal.h"

@interface AVAssetResourceLoadingRequestor : NSObject {
    AVAssetResourceLoadingRequestorInternal *_requestor;
}


@property (readonly, nonatomic) BOOL providesExpiredSessionReports;


-(id)initWithRequestInfo:(struct __CFDictionary *)arg0 ;
-(void)dealloc;


@end


#endif