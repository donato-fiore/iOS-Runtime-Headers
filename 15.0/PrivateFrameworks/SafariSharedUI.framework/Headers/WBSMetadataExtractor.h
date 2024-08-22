// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WBSMETADATAEXTRACTOR_H
#define WBSMETADATAEXTRACTOR_H

@class WKWebProcessPlugInScriptWorld, JSContext, WKWebProcessPlugInFrame;

#import <Foundation/Foundation.h>


@interface WBSMetadataExtractor : NSObject {
    WKWebProcessPlugInScriptWorld *_webProcessPlugInScriptWorld;
    JSContext *_context;
}


@property (readonly, nonatomic) JSContext *context;
@property (readonly, nonatomic) WKWebProcessPlugInFrame *webProcessPlugInFrame; // ivar: _webProcessPlugInFrame


+(id)metadataExtractorScriptSource;
-(id)_colorFromColorComponents:(id)arg0 ;
-(id)_resultForInvokingFunctionWithName:(id)arg0 ;
-(id)appleTouchIconURLs;
-(id)faviconURLs;
-(id)firstElementForSelector:(id)arg0 ;
-(id)initWithWebProcessPlugInFrame:(id)arg0 ;
-(id)initWithWebProcessPlugInFrame:(id)arg0 useNormalWorld:(BOOL)arg1 ;
-(id)makeContext;
-(void)dealloc;
-(void)getTemplateIconURL:(*id)arg0 andColor:(*id)arg1 ;


@end


#endif