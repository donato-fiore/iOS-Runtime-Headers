// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BRCTRIALCONFIGURATION_H
#define BRCTRIALCONFIGURATION_H

@class NSString;

#import <Foundation/Foundation.h>


@interface BRCTrialConfiguration : NSObject

@property (readonly, nonatomic) NSString *factorPackId; // ivar: factorPackId
@property (readonly, nonatomic) BOOL ignorePercentsOnInternal; // ivar: ignorePercentsOnInternal
@property (readonly, nonatomic) NSInteger maxFailurePerVersion; // ivar: maxFailurePerVersion
@property (readonly, nonatomic) NSInteger percent100kAndAbove; // ivar: percent100kAndAbove
@property (readonly, nonatomic) NSInteger percentBelow100k; // ivar: percentBelow100k
@property (readonly, nonatomic) NSInteger percentBelow10k; // ivar: percentBelow10k
@property (readonly, nonatomic) NSInteger percentBelow1k; // ivar: percentBelow1k
@property (readonly, nonatomic) NSString *rampId; // ivar: rampId
@property (readonly, nonatomic) NSString *rolloutId; // ivar: rolloutId


+(id)defaultConfiguration;
-(BOOL)boolForFactor:(id)arg0 client:(id)arg1 namespace:(id)arg2 byDefault:(BOOL)arg3 ;
-(NSInteger)longLongForFactor:(id)arg0 client:(id)arg1 namespace:(id)arg2 min:(NSInteger)arg3 max:(NSInteger)arg4 byDefault:(NSInteger)arg5 ;
-(id)init;
-(void)refresh;


@end


#endif