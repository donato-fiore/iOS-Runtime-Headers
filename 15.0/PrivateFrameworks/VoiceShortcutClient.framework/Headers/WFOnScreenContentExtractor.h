// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFONSCREENCONTENTEXTRACTOR_H
#define WFONSCREENCONTENTEXTRACTOR_H


#import <Foundation/Foundation.h>


@interface WFOnScreenContentExtractor : NSObject

@property (nonatomic) CGRect applicationFrame; // ivar: _applicationFrame
@property (nonatomic) NSInteger applicationLevel; // ivar: _applicationLevel


-(id)activityItemsConfigurationFromScene:(id)arg0 ;
-(id)nodeWithItem:(id)arg0 file:(id)arg1 ;
-(id)responseWithError:(id)arg0 ;
-(void)handleAction:(id)arg0 completionHandler:(id)arg1 ;
-(void)loadActivityItemsConfigurationItemsForScene:(id)arg0 serviceOptions:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif