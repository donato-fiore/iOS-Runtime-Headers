// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC8MUSICKIT22ARTWORKLOADINGPROTOCOL_H
#define _TTC8MUSICKIT22ARTWORKLOADINGPROTOCOL_H

@class NSURLProtocol;



@interface _TtC8MusicKit22ArtworkLoadingProtocol : NSURLProtocol



+(BOOL)canInitWithRequest:(id)arg0 ;
+(id)canonicalRequestForRequest:(id)arg0 ;
-(id)initWithRequest:(id)arg0 cachedResponse:(id)arg1 client:(id)arg2 ;
-(void)startLoading;
-(void)stopLoading;


@end


#endif