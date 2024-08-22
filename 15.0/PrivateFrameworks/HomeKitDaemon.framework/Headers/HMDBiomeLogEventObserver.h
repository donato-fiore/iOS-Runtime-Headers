// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDBIOMELOGEVENTOBSERVER_H
#define HMDBIOMELOGEVENTOBSERVER_H

@class HMFObject, NSString;
@protocol HMMLogEventObserver, HMDBiomeLogEventObserverDataSource;


#import "HMDBiomeEventManager.h"

@interface HMDBiomeLogEventObserver : HMFObject <HMMLogEventObserver>

 {
    HMDBiomeEventManager *_biomeEventManager;
    id<HMDBiomeLogEventObserverDataSource> *_dataSource;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)shortDescription;
-(id)initWithBiomeEventManager:(id)arg0 dataSource:(id)arg1 ;
-(void)didReceiveEventFromDispatcher:(id)arg0 ;


@end


#endif