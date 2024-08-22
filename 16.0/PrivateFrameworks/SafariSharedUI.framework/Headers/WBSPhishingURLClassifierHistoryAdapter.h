// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WBSPHISHINGURLCLASSIFIERHISTORYADAPTER_H
#define WBSPHISHINGURLCLASSIFIERHISTORYADAPTER_H

@class WBSHistory;
@protocol WBSPhishingURLClassifier, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface WBSPhishingURLClassifierHistoryAdapter : NSObject <WBSPhishingURLClassifier>

 {
    WBSHistory *_history;
    NSObject<OS_dispatch_queue> *_queue;
}




-(id)initWithHistory:(id)arg0 ;
-(void)classifyURL:(id)arg0 options:(NSUInteger)arg1 completionHandler:(id)arg2 ;


@end


#endif