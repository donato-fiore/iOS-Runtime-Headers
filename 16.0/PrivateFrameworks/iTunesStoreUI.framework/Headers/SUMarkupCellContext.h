// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SUMARKUPCELLCONTEXT_H
#define SUMARKUPCELLCONTEXT_H

@class NSString;


#import "SUItemCellContext.h"

@interface SUMarkupCellContext : SUItemCellContext {
    NSInteger _pendingWebViewLoads;
    *__CFDictionary _webViewCache;
}


@property (retain, nonatomic) NSString *stylesheet; // ivar: _stylesheet
@property (nonatomic) CGFloat webViewWidth; // ivar: _webViewWidth


-(id)webViewForMarkup:(id)arg0 ;
-(void)dealloc;
-(void)webViewDidFinishLoading:(id)arg0 ;


@end


#endif