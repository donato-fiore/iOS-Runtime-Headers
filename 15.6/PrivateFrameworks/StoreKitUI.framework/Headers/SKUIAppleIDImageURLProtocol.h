// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKUIAPPLEIDIMAGEURLPROTOCOL_H
#define SKUIAPPLEIDIMAGEURLPROTOCOL_H

@class NSURLProtocol;



@interface SKUIAppleIDImageURLProtocol : NSURLProtocol



+(BOOL)canInitWithRequest:(id)arg0 ;
+(id)canonicalRequestForRequest:(id)arg0 ;
-(void)_startLoading;
-(void)startLoading;
-(void)stopLoading;


@end


#endif