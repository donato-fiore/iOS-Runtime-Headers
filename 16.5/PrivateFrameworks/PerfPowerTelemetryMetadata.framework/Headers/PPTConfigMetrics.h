// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PPTCONFIGMETRICS_H
#define PPTCONFIGMETRICS_H

@class NSString;
@protocol PPTMetricDeclProtocol;

#import <Foundation/Foundation.h>


@interface PPTConfigMetrics : NSObject <PPTMetricDeclProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)allDeclMetrics;
+(id)configMetrics;
+(id)subsystem;


@end


#endif