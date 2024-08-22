// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFONSCREENCONTENTMANAGER_H
#define WFONSCREENCONTENTMANAGER_H


#import <Foundation/Foundation.h>


@interface WFOnScreenContentManager : NSObject



-(id)currentDisplayLayout;
-(id)visibleApplicationsFromLayout:(id)arg0 ;
-(void)getContentForLayoutElement:(id)arg0 serviceOptions:(id)arg1 completionHandler:(id)arg2 ;
-(void)getNodeForGlobalUserActivityWithCompletionHandler:(id)arg0 ;
-(void)getOnScreenContentWithOptions:(id)arg0 completion:(id)arg1 ;
-(void)getOnScreenContentWithOptions:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif