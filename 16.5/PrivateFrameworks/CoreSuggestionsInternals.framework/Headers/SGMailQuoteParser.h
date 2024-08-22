// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SGMAILQUOTEPARSER_H
#define SGMAILQUOTEPARSER_H


#import <Foundation/Foundation.h>


@interface SGMailQuoteParser : NSObject



+(id)_tofuRegions:(id)arg0 utf8:(char *)arg1 isAOSPMail:(BOOL)arg2 ;
+(id)_xWrote:(id)arg0 utf8:(char *)arg1 ;
+(id)quotedRegionsFrom:(id)arg0 isAOSPMail:(BOOL)arg1 foundToEndOfMessage:(*BOOL)arg2 ;


@end


#endif