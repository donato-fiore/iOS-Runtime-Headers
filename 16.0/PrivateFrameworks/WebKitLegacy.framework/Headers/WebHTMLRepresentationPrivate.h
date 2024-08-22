// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WEBHTMLREPRESENTATIONPRIVATE_H
#define WEBHTMLREPRESENTATIONPRIVATE_H

@class WAKView;
@protocol WebPluginManualLoader;

#import <Foundation/Foundation.h>

#import "WebDataSource.h"

@interface WebHTMLRepresentationPrivate : NSObject {
    WebDataSource *dataSource;
    BOOL hasSentResponseToPlugin;
    BOOL includedInWebKitStatistics;
    id<WebPluginManualLoader> *manualLoader;
    WAKView *pluginView;
}






@end


#endif