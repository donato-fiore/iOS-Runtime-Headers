// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef QSSMUTABLECLIENTSETUPINFO_H
#define QSSMUTABLECLIENTSETUPINFO_H

@class NSString;


#import "QSSClientSetupInfo.h"

@interface QSSMutableClientSetupInfo : QSSClientSetupInfo

@property (nonatomic) BOOL endpoint_extra_delay;
@property (nonatomic) float endpoint_threshold;
@property (copy, nonatomic) NSString *speech_id;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif