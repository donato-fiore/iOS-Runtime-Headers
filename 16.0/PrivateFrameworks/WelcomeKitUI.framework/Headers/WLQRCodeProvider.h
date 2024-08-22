// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WLQRCODEPROVIDER_H
#define WLQRCODEPROVIDER_H

@class NSMutableArray, NSString;
@protocol WLRequestDelegate, WLQRCodeProviderDelegate;

#import <Foundation/Foundation.h>

#import "WLRequest.h"

@interface WLQRCodeProvider : NSObject <WLRequestDelegate>

 {
    WLRequest *_request;
    NSMutableArray *_urls;
    NSMutableArray *_codes;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<WLQRCodeProviderDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (nonatomic) BOOL useGooglePlayStore; // ivar: _useGooglePlayStore


-(void)complete;
-(void)drainQueue;
-(void)request;
-(void)requestDidFinish:(BOOL)arg0 ;


@end


#endif