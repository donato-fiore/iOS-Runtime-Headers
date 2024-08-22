// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PPTSTORAGEMETRICS_H
#define PPTSTORAGEMETRICS_H

@class NSString;
@protocol PPTMetricDeclProtocol;

#import <Foundation/Foundation.h>


@interface PPTStorageMetrics : NSObject <PPTMetricDeclProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)allDeclMetrics;
+(id)configMetrics;
+(id)configurationMetrics;
+(id)subsystem;
+(id)timeOffsetMetrics;


@end


#endif