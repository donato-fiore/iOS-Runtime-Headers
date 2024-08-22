// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef COMESHREQUEST_H
#define COMESHREQUEST_H

@protocol OS_nw_activity;


#import "COMeshCommand.h"

@interface COMeshRequest : COMeshCommand

@property (retain, nonatomic) NSObject<OS_nw_activity> *activity; // ivar: _activity


+(id)acceptableResponses;
-(CGFloat)responseTimeout;


@end


#endif