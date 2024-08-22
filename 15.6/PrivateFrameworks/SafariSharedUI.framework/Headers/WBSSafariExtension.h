// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WBSSAFARIEXTENSION_H
#define WBSSAFARIEXTENSION_H

@class NSUUID, WKWebsiteDataStore, NSString, NSArray, NSURL;

#import <Foundation/Foundation.h>


@interface WBSSafariExtension : NSObject

@property (readonly, copy, nonatomic) NSUUID *baseURIHost; // ivar: _baseURIHost
@property (nonatomic) RetainPtr<const __SecCode *> bundleCodeRef; // ivar: _bundleCodeRef
@property (readonly, copy, nonatomic) WKWebsiteDataStore *defaultWebsiteDataStore;
@property (readonly, copy, nonatomic) NSString *displayName; // ivar: _displayName
@property (copy, nonatomic) NSArray *injectedScripts; // ivar: _injectedScripts
@property (copy, nonatomic) NSArray *injectedStyleSheets; // ivar: _injectedStyleSheets
@property (retain, nonatomic) NSURL *safariExtensionBaseURI; // ivar: _safariExtensionBaseURI


-(id)initWithExtension:(id)arg0 ;


@end


#endif