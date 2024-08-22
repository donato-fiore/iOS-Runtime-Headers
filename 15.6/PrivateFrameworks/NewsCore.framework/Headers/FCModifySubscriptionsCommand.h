// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FCMODIFYSUBSCRIPTIONSCOMMAND_H
#define FCMODIFYSUBSCRIPTIONSCOMMAND_H



#import "FCModifyRecordsCommand.h"

@interface FCModifySubscriptionsCommand : FCModifyRecordsCommand



+(id)desiredKeys;
-(BOOL)mergeLocalRecord:(id)arg0 withRemoteRecord:(id)arg1 ;
-(id)initWithSubscriptions:(id)arg0 merge:(BOOL)arg1 ;


@end


#endif