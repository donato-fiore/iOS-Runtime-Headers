// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _EFBLOCKOBSERVER_H
#define _EFBLOCKOBSERVER_H



#import "EFObserver.h"

@interface _EFBlockObserver : EFObserver {
    id *_resultBlock;
    id *_completionBlock;
    id *_failureBlock;
}




// -(id)initWithResultBlock:(id)arg0 completionBlock:(unk)arg1 failureBlock:(id)arg2  ;
-(void)observerDidComplete;
-(void)observerDidFailWithError:(id)arg0 ;
-(void)observerDidReceiveResult:(id)arg0 ;


@end


#endif