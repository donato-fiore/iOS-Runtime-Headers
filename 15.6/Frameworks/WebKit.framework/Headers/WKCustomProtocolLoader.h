// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WKCUSTOMPROTOCOLLOADER_H
#define WKCUSTOMPROTOCOLLOADER_H

@class NSString;
@protocol NSURLConnectionDelegate;

#import <Foundation/Foundation.h>


@interface WKCustomProtocolLoader : NSObject <NSURLConnectionDelegate>

 {
    WeakPtr<WebKit::LegacyCustomProtocolManagerProxy, WTF::EmptyCounter> _customProtocolManagerProxy;
    ObjectIdentifier<WebKit::LegacyCustomProtocolIDType> _customProtocolID;
    NSUInteger _storagePolicy;
    RetainPtr<NSURLConnection> _urlConnection;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)connection:(id)arg0 willCacheResponse:(id)arg1 ;
-(id)connection:(id)arg0 willSendRequest:(id)arg1 redirectResponse:(id)arg2 ;
-(id)initWithLegacyCustomProtocolManagerProxy:(*void)arg0 customProtocolID:(struct ObjectIdentifier<WebKit::LegacyCustomProtocolIDType> )arg1 request:(id)arg2 ;
-(void)cancel;
-(void)connection:(id)arg0 didFailWithError:(id)arg1 ;
-(void)connection:(id)arg0 didReceiveData:(id)arg1 ;
-(void)connection:(id)arg0 didReceiveResponse:(id)arg1 ;
-(void)connectionDidFinishLoading:(id)arg0 ;
-(void)dealloc;


@end


#endif