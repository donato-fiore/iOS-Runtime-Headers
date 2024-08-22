// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef QLPREVIEWCONVERTERURLPROTOCOL_H
#define QLPREVIEWCONVERTERURLPROTOCOL_H

@class QLPreviewURLProtocol;



@interface QLPreviewConverterURLProtocol : QLPreviewURLProtocol



+(id)_errorForNoPreview;
+(id)protocolScheme;
+(void)initialize;
+(void)registerPreview:(id)arg0 ;
+(void)stopLoadingProtocol:(id)arg0 ;
+(void)unregisterURLs:(id)arg0 andPreview:(id)arg1 ;


@end


#endif