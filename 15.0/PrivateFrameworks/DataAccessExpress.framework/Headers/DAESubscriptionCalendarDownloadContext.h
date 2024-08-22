// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DAESUBSCRIPTIONCALENDARDOWNLOADCONTEXT_H
#define DAESUBSCRIPTIONCALENDARDOWNLOADCONTEXT_H

@protocol DAESubscribedCalendarDownloadDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface DAESubscriptionCalendarDownloadContext : NSObject

@property (retain, nonatomic) NSObject<DAESubscribedCalendarDownloadDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue


-(void)asyncCallOutToDelegate:(id)arg0 ;
-(void)callOutToDelegate:(id)arg0 ;


@end


#endif