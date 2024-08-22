// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC10STOCKSCORE24CLOUDKITWATCHLISTSERVICE_H
#define _TTC10STOCKSCORE24CLOUDKITWATCHLISTSERVICE_H

@class SwiftObject;
@protocol SCWatchlistObserver;



@interface _TtC10StocksCore24CloudKitWatchlistService : SwiftObject <SCWatchlistObserver>

 {
    ? observers;
    ? metadataManager;
    ? metadataProvider;
    ? lazyWatchlist;
}




-(void)watchlist:(id)arg0 didChangeWithDiff:(id)arg1 ;


@end


#endif