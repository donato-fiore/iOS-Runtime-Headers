// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SWWEBVIEWCONFIGURATIONFACTORY_H
#define SWWEBVIEWCONFIGURATIONFACTORY_H

@class NSString, WKProcessPool, WKWebsiteDataStore;
@protocol SWWebViewConfigurationFactory;

#import <Foundation/Foundation.h>


@interface SWWebViewConfigurationFactory : NSObject <SWWebViewConfigurationFactory>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) WKProcessPool *processPool; // ivar: _processPool
@property (readonly) Class superclass;
@property (readonly, nonatomic) WKWebsiteDataStore *websiteDataStore; // ivar: _websiteDataStore


-(id)createWebViewConfigurationWithUserContentController:(id)arg0 mediaSettings:(id)arg1 ;
-(id)initWithProcessPool:(id)arg0 websiteDataStore:(id)arg1 ;


@end


#endif