// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TIDPEVENTDISPATCHER_H
#define TIDPEVENTDISPATCHER_H

@class NSString;
@protocol TITypingSessionAggregatedEventObserver, TIDPReportingDelegate;

#import <Foundation/Foundation.h>


@interface TIDPEventDispatcher : NSObject <TITypingSessionAggregatedEventObserver>

 {
    id<TIDPReportingDelegate> *_reportingDelegate;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithReportingDelegate:(id)arg0 ;
-(void)sessionDidEnd:(id)arg0 aligned:(id)arg1 ;


@end


#endif