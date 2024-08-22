// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICERESULTWAITQUEUE_H
#define ICERESULTWAITQUEUE_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface ICEResultWaitQueue : NSObject {
    NSMutableArray *queryList;
    _opaque_pthread_cond_t resCond;
    _opaque_pthread_mutex_t resMutex;
}




-(id)copyResultForCallID:(unsigned int)arg0 ;
-(id)init;
-(void)addResult:(struct tagCONNRESULT *)arg0 forCallID:(unsigned int)arg1 ;
-(void)dealloc;


@end


#endif