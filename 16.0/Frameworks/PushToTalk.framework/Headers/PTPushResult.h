// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PTPUSHRESULT_H
#define PTPUSHRESULT_H


#import <Foundation/Foundation.h>

#import "PTParticipant.h"

@interface PTPushResult : NSObject

@property (retain, nonatomic) PTParticipant *participant; // ivar: _participant
@property (readonly, nonatomic) NSInteger type; // ivar: _type


+(id)leaveChannelPushResult;
+(id)pushResultForActiveRemoteParticipant:(id)arg0 ;
-(id)_initWithResultType:(NSInteger)arg0 participant:(id)arg1 ;


@end


#endif