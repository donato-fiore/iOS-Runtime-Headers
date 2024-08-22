// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MCMRESULTDISKUSAGEFORCONTAINER_H
#define MCMRESULTDISKUSAGEFORCONTAINER_H



#import "MCMResultBase.h"

@interface MCMResultDiskUsageForContainer : MCMResultBase

@property (nonatomic) NSUInteger diskUsageBytes; // ivar: _diskUsageBytes


-(BOOL)encodeResultOntoReply:(id)arg0 ;
-(id)initWithDiskUsageBytes:(NSUInteger)arg0 ;


@end


#endif