// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CSEXTENSIONJOBTHROTTLE_H
#define CSEXTENSIONJOBTHROTTLE_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface CSExtensionJobThrottle : NSObject

@property (retain, nonatomic) NSMutableDictionary *countersByBundleID; // ivar: _countersByBundleID
@property (nonatomic) NSUInteger maxRetryCount; // ivar: _maxRetryCount
@property (nonatomic) NSUInteger maxSecondsBetweenRetries; // ivar: _maxSecondsBetweenRetries
@property (nonatomic) NSUInteger maxSecondsBetweenRetriesUnderMemoryPressure; // ivar: _maxSecondsBetweenRetriesUnderMemoryPressure
@property (nonatomic) NSUInteger minSecondsBetweenRetries; // ivar: _minSecondsBetweenRetries
@property (nonatomic) NSUInteger minSecondsBetweenRetriesUnderMemoryPressure; // ivar: _minSecondsBetweenRetriesUnderMemoryPressure


-(NSInteger)nextDispatchTimeDeltaForExtension:(id)arg0 job:(id)arg1 memoryPressure:(BOOL)arg2 ;
-(id)initWithDictionary:(id)arg0 ;


@end


#endif