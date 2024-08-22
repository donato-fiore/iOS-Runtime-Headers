// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SWSNAPSHOTMANAGER_H
#define SWSNAPSHOTMANAGER_H

@class NSString, WKWebView;
@protocol SWSnapshotManager, SWConfigurationManager;

#import <Foundation/Foundation.h>


@interface SWSnapshotManager : NSObject <SWSnapshotManager>



@property (readonly, nonatomic) NSObject<SWConfigurationManager> *configurationManager; // ivar: _configurationManager
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) WKWebView *webView; // ivar: _webView


-(id)initWithWebView:(id)arg0 configurationManager:(id)arg1 ;
-(void)takeSnapshotWithCompletionHandler:(id)arg0 ;


@end


#endif