// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PPRERANKER_H
#define PPRERANKER_H

@class _PASLock, NSString;
@protocol PPFeedbackAccepting, PPClientStore;

#import <Foundation/Foundation.h>

#import "PPNamedEntityStore.h"
#import "PPClientFeedbackHelper.h"

@interface PPReranker : NSObject <PPFeedbackAccepting, PPClientStore>

 {
    PPNamedEntityStore *_namedEntityStore;
    PPClientFeedbackHelper *_clientFeedbackHelper;
    _PASLock *_dataLock;
}


@property (retain, nonatomic) NSString *clientIdentifier;


-(id)_lazyLoadEntityRankMapWithError:(*id)arg0 ;
-(id)forwardingTargetForSelector:(SEL)arg0 ;
-(id)init;
-(id)initWithNamedEntityStore:(id)arg0 ;
-(id)rerankedMediaItems:(id)arg0 error:(*id)arg1 ;
-(void)registerFeedback:(id)arg0 completion:(id)arg1 ;


@end


#endif