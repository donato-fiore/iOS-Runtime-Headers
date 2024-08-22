// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFONSCREENCONTENTSERVICE_H
#define WFONSCREENCONTENTSERVICE_H


#import <Foundation/Foundation.h>


@interface WFOnScreenContentService : NSObject



+(id)sharedService;
-(void)getOnScreenContentWithOptions:(id)arg0 completion:(id)arg1 ;
-(void)getOnScreenContentWithOptions:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif