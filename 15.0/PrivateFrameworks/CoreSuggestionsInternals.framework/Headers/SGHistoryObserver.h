// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SGHISTORYOBSERVER_H
#define SGHISTORYOBSERVER_H

@class NSString;
@protocol SGSuggestHistoryObserver;

#import <Foundation/Foundation.h>

#import "SGSqlEntityStore.h"

@interface SGHistoryObserver : NSObject <SGSuggestHistoryObserver>

 {
    SGSqlEntityStore *_store;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithStore:(id)arg0 ;
-(void)processNewConfirmOrRejectEventHashes:(id)arg0 ;
-(void)processNewConfirmedOrRejectedReminderHashes:(id)arg0 ;


@end


#endif