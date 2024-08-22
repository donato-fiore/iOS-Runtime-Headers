// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SWURLSCHEMEHANDLERMANAGER_H
#define SWURLSCHEMEHANDLERMANAGER_H

@class WKWebViewConfiguration, NSString, NSMutableDictionary, NSMapTable;
@protocol SWURLSchemeHandlerManager, SWLogger;

#import <Foundation/Foundation.h>


@interface SWURLSchemeHandlerManager : NSObject <SWURLSchemeHandlerManager>



@property (readonly, nonatomic) WKWebViewConfiguration *configuration; // ivar: _configuration
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSMutableDictionary *factories; // ivar: _factories
@property (readonly, nonatomic) NSMapTable *handlers; // ivar: _handlers
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<SWLogger> *logger; // ivar: _logger
@property (readonly) Class superclass;


-(id)initWithConfiguration:(id)arg0 logger:(id)arg1 ;
-(void)registerFactory:(id)arg0 forScheme:(id)arg1 ;
-(void)webView:(id)arg0 startURLSchemeTask:(id)arg1 ;
-(void)webView:(id)arg0 stopURLSchemeTask:(id)arg1 ;


@end


#endif