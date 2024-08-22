// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SWWEAKURLSCHEMEHANDLER_H
#define SWWEAKURLSCHEMEHANDLER_H

@class NSString;
@protocol WKURLSchemeHandler;

#import <Foundation/Foundation.h>


@interface SWWeakURLSchemeHandler : NSObject <WKURLSchemeHandler>



@property (readonly, weak, nonatomic) NSObject<WKURLSchemeHandler> *URLSchemeHandler; // ivar: _URLSchemeHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithURLSchemeHandler:(id)arg0 ;
-(void)webView:(id)arg0 startURLSchemeTask:(id)arg1 ;
-(void)webView:(id)arg0 stopURLSchemeTask:(id)arg1 ;


@end


#endif