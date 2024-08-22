// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WBSSAFARIEXTENSION_H
#define WBSSAFARIEXTENSION_H

@class NSUUID, NSString, NSArray, NSURL;

#import <Foundation/Foundation.h>

#import "WBSExtensionsController.h"

@interface WBSSafariExtension : NSObject

@property (readonly, copy, nonatomic) NSUUID *baseURIHost; // ivar: _baseURIHost
@property (nonatomic) RetainPtr<const __SecCode *> bundleCodeRef; // ivar: _bundleCodeRef
@property (readonly, copy, nonatomic) NSString *displayName; // ivar: _displayName
@property (weak, nonatomic) WBSExtensionsController *extensionsController; // ivar: _extensionsController
@property (copy, nonatomic) NSArray *injectedScripts; // ivar: _injectedScripts
@property (copy, nonatomic) NSArray *injectedStyleSheets; // ivar: _injectedStyleSheets
@property (retain, nonatomic) NSURL *safariExtensionBaseURI; // ivar: _safariExtensionBaseURI


-(id)initWithExtension:(id)arg0 extensionsController:(id)arg1 ;


@end


#endif