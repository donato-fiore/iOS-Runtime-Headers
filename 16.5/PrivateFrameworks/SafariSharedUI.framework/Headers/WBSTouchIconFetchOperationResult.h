// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WBSTOUCHICONFETCHOPERATIONRESULT_H
#define WBSTOUCHICONFETCHOPERATIONRESULT_H

@class NSString, NSURLResponse, UIImage;

#import <Foundation/Foundation.h>


@interface WBSTouchIconFetchOperationResult : NSObject

@property (readonly, nonatomic, getter=isFavicon) BOOL favicon; // ivar: _favicon
@property (readonly, nonatomic) BOOL higherPriorityIconDownloadFailedDueToNetworkError; // ivar: _higherPriorityIconDownloadFailedDueToNetworkError
@property (readonly, copy, nonatomic) NSString *host; // ivar: _host
@property (readonly, nonatomic) BOOL pageRequestDidSucceed; // ivar: _pageRequestDidSucceed
@property (readonly, nonatomic) NSURLResponse *response; // ivar: _response
@property (readonly, nonatomic) UIImage *touchIcon; // ivar: _touchIcon


+(id)resultForFetchFailureWithHost:(id)arg0 pageRequestDidSucceed:(BOOL)arg1 response:(id)arg2 ;
+(id)resultWithTouchIcon:(id)arg0 host:(id)arg1 isFavicon:(BOOL)arg2 pageRequestDidSucceed:(BOOL)arg3 response:(id)arg4 higherPriorityIconDownloadFailedDueToNetworkError:(BOOL)arg5 ;
-(id)initWithTouchIcon:(id)arg0 host:(id)arg1 isFavicon:(BOOL)arg2 pageRequestDidSucceed:(BOOL)arg3 response:(id)arg4 higherPriorityIconDownloadFailedDueToNetworkError:(BOOL)arg5 ;


@end


#endif