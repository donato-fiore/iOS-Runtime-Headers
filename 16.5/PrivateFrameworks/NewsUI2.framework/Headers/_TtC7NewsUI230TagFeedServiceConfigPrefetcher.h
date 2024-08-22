// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC7NEWSUI230TAGFEEDSERVICECONFIGPREFETCHER_H
#define _TTC7NEWSUI230TAGFEEDSERVICECONFIGPREFETCHER_H


#import <Foundation/Foundation.h>


@interface _TtC7NewsUI230TagFeedServiceConfigPrefetcher : NSObject {
    ? feedManager;
    ? configFetcher;
    ? operationQueue;
    ? formatService;
    ? sportsDataService;
    ? cache;
    ? interest;
    ? $__lazy_storage_$_isEnabled;
}




-(id)init;
-(void)revisitSuspendedState;


@end


#endif