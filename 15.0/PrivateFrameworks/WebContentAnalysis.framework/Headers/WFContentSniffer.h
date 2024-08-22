// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFCONTENTSNIFFER_H
#define WFCONTENTSNIFFER_H


#import <Foundation/Foundation.h>


@interface WFContentSniffer : NSObject



+(BOOL)MIMETypeIsHTMLOrText:(id)arg0 ;
+(BOOL)isGIF:(id)arg0 ;
+(BOOL)isHTML:(id)arg0 ;
+(BOOL)isJPEG:(id)arg0 ;
+(BOOL)isOctetStream:(id)arg0 ;
+(BOOL)isPDF:(id)arg0 ;
+(BOOL)isPNG:(id)arg0 ;
+(BOOL)isSWF:(id)arg0 ;
+(BOOL)isWord:(id)arg0 ;
+(BOOL)isXHTML:(id)arg0 ;
+(BOOL)isXML:(id)arg0 ;
+(id)MIMETypeForData:(id)arg0 ;
+(id)MIMETypeForData:(id)arg0 andString:(id)arg1 ;
+(id)MIMETypeForString:(id)arg0 ;


@end


#endif