// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EKEVENTFETCHREQUESTTOKEN_H
#define EKEVENTFETCHREQUESTTOKEN_H

@protocol EKFetchRequestToken;

#import <Foundation/Foundation.h>

#import "EKEventStore.h"

@interface EKEventFetchRequestToken : NSObject <EKFetchRequestToken>



@property (readonly, weak, nonatomic) EKEventStore *eventStore; // ivar: _eventStore
@property (readonly, nonatomic) unsigned int token; // ivar: _token


-(id)initWithEventStore:(id)arg0 token:(int)arg1 ;
-(void)cancel;


@end


#endif