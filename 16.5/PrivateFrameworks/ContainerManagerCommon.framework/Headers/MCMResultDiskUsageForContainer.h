// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MCMRESULTDISKUSAGEFORCONTAINER_H
#define MCMRESULTDISKUSAGEFORCONTAINER_H



#import "MCMResultBase.h"

@interface MCMResultDiskUsageForContainer : MCMResultBase

@property (nonatomic) NSUInteger containerClass; // ivar: _containerClass
@property (nonatomic) NSUInteger descendants; // ivar: _descendants
@property (nonatomic) NSUInteger diskUsageBytes; // ivar: _diskUsageBytes
@property (nonatomic) int personaType; // ivar: _personaType


+(id)_reportingWorkloop;
-(BOOL)encodeResultOntoReply:(id)arg0 ;
-(NSUInteger)_roundToTwoSignificantDigitsWithNumber:(NSUInteger)arg0 ;
-(id)initWithDiskUsageBytes:(NSUInteger)arg0 descendants:(NSUInteger)arg1 containerClass:(NSUInteger)arg2 personaType:(int)arg3 ;
-(void)_report;


@end


#endif