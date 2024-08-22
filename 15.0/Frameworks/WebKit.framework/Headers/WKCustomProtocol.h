// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WKCUSTOMPROTOCOL_H
#define WKCUSTOMPROTOCOL_H

@class NSURLProtocol;



@interface WKCustomProtocol : NSURLProtocol {
    RetainPtr<__CFRunLoop *> _initializationRunLoop;
}


@property (readonly, nonatomic) ObjectIdentifier<WebKit::LegacyCustomProtocolIDType> customProtocolID; // ivar: _customProtocolID
@property (readonly, nonatomic) *__CFRunLoop initializationRunLoop;


+(BOOL)canInitWithRequest:(id)arg0 ;
+(BOOL)requestIsCacheEquivalent:(id)arg0 toRequest:(id)arg1 ;
+(id)canonicalRequestForRequest:(id)arg0 ;
-(id)initWithRequest:(id)arg0 cachedResponse:(id)arg1 client:(id)arg2 ;
-(void)startLoading;
-(void)stopLoading;


@end


#endif