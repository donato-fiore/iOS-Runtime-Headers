// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef QLPREVIEWMULTIPARTURLPROTOCOL_H
#define QLPREVIEWMULTIPARTURLPROTOCOL_H

@class NSURLProtocol;



@interface QLPreviewMultiPartURLProtocol : NSURLProtocol



+(BOOL)canInitWithRequest:(id)arg0 ;
+(id)canonicalRequestForRequest:(id)arg0 ;
+(id)protocolScheme;
+(void)initialize;
-(void)startLoading;
-(void)stopLoading;


@end


#endif