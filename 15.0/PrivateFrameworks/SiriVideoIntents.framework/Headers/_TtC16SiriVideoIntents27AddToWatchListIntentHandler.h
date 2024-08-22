// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC16SIRIVIDEOINTENTS27ADDTOWATCHLISTINTENTHANDLER_H
#define _TTC16SIRIVIDEOINTENTS27ADDTOWATCHLISTINTENTHANDLER_H

@protocol AddToWatchListIntentHandling;

#import <Foundation/Foundation.h>


@interface _TtC16SiriVideoIntents27AddToWatchListIntentHandler : NSObject <AddToWatchListIntentHandling>

 {
    ? contentResolver;
    ? watchListService;
    ? analyticsService;
}




-(id)init;
-(void)confirmAddToWatchList:(id)arg0 completion:(id)arg1 ;
-(void)handleAddToWatchList:(id)arg0 completion:(id)arg1 ;
-(void)resolveContentForAddToWatchList:(id)arg0 withCompletion:(id)arg1 ;


@end


#endif