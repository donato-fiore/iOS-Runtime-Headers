// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CRKDISPATCHSOURCESUBSCRIPTION_H
#define CRKDISPATCHSOURCESUBSCRIPTION_H

@protocol CRKCancelable, OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface CRKDispatchSourceSubscription : NSObject <CRKCancelable>



@property (copy, nonatomic) id *handler; // ivar: _handler
@property (readonly, nonatomic) NSObject<OS_dispatch_source> *source; // ivar: _source


+(id)subscriptionWithSource:(id)arg0 handler:(id)arg1 ;
-(id)initWithSource:(id)arg0 handler:(id)arg1 ;
-(void)cancel;
-(void)dealloc;
-(void)resume;


@end


#endif