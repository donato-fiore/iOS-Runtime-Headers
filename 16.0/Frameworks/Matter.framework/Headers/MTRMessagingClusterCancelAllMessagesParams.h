// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTRMESSAGINGCLUSTERCANCELALLMESSAGESPARAMS_H
#define MTRMESSAGINGCLUSTERCANCELALLMESSAGESPARAMS_H

@class NSNumber;

#import <Foundation/Foundation.h>


@interface MTRMessagingClusterCancelAllMessagesParams : NSObject

@property (retain, nonatomic) NSNumber *implementationDateTime; // ivar: _implementationDateTime
@property (retain, nonatomic) NSNumber *timedInvokeTimeoutMs; // ivar: _timedInvokeTimeoutMs


-(id)description;
-(id)init;


@end


#endif