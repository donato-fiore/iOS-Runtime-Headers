// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MKPUTROUTER_H
#define MKPUTROUTER_H

@class NSDictionary, NSString, NSMutableArray, NSArray;
@protocol MKHTTPRouter, MKPUTRouterDelegate;

#import <Foundation/Foundation.h>


@interface MKPUTRouter : NSObject <MKHTTPRouter>

 {
    NSDictionary *_routing;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<MKPUTRouterDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSMutableArray *supportedContentTypes; // ivar: _supportedContentTypes
@property (retain, nonatomic) NSArray *supportedTransferEncodings; // ivar: _supportedTransferEncodings


-(BOOL)isAllowedPath:(id)arg0 ;
-(id)init;
-(void)server:(id)arg0 didReceiveRequest:(id)arg1 response:(id)arg2 ;


@end


#endif