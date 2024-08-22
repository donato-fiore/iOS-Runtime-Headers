// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MFLOCALIZEDMESSAGEHEADERS_H
#define MFLOCALIZEDMESSAGEHEADERS_H

@class MFMessageHeaders;



@interface MFLocalizedMessageHeaders : MFMessageHeaders



+(id)englishHeadersFromLocalizedHeaders:(id)arg0 ;
+(id)localizedHeaders;
+(id)localizedHeadersFromEnglishHeaders:(id)arg0 ;
-(id)copyFormattedHeaderValueFromAddressList:(id)arg0 ;
-(id)markupString;
-(void)appendHeaderMarkupForKey:(id)arg0 value:(id)arg1 toString:(id)arg2 ;


@end


#endif