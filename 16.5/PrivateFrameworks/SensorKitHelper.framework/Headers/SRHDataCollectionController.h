// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SRHDATACOLLECTIONCONTROLLER_H
#define SRHDATACOLLECTIONCONTROLLER_H


#import <Foundation/Foundation.h>


@interface SRHDataCollectionController : NSObject



+(BOOL)isMessagingApp:(id)arg0 ;
+(BOOL)isSocialMediaApp;
+(void)initialize;
+(void)isMediaEventsCollectionEnabledFor:(id)arg0 completionHandler:(id)arg1 ;
+(void)isMediaEventsStreamAuthorizedWithCompletionHandler:(id)arg0 ;


@end


#endif