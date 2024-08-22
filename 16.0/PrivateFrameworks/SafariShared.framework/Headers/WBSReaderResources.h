// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WBSREADERRESOURCES_H
#define WBSREADERRESOURCES_H


#import <Foundation/Foundation.h>


@interface WBSReaderResources : NSObject



+(id)localizedStringsScriptURL;
+(id)readerHTMLSourceURL;
+(struct OpaqueJSScript *)articleFinderScriptForContext:(struct OpaqueJSContext *)arg0 ;
+(struct OpaqueJSScript *)sharedUINormalWorldScriptForContext:(struct OpaqueJSContext *)arg0 ;
+(struct OpaqueJSScript *)sharedUIScriptForContext:(struct OpaqueJSContext *)arg0 ;


@end


#endif