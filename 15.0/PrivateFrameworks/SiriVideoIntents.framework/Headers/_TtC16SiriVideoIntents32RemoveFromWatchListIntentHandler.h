// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC16SIRIVIDEOINTENTS32REMOVEFROMWATCHLISTINTENTHANDLER_H
#define _TTC16SIRIVIDEOINTENTS32REMOVEFROMWATCHLISTINTENTHANDLER_H

@protocol RemoveFromWatchListIntentHandling;

#import <Foundation/Foundation.h>


@interface _TtC16SiriVideoIntents32RemoveFromWatchListIntentHandler : NSObject <RemoveFromWatchListIntentHandling>

 {
    ? contentResolver;
    ? watchListService;
    ? analyticsService;
}




-(id)init;
-(void)confirmRemoveFromWatchList:(id)arg0 completion:(id)arg1 ;
-(void)handleRemoveFromWatchList:(id)arg0 completion:(id)arg1 ;
-(void)resolveContentForRemoveFromWatchList:(id)arg0 withCompletion:(id)arg1 ;


@end


#endif