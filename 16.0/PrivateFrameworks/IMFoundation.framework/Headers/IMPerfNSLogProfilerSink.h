// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IMPERFNSLOGPROFILERSINK_H
#define IMPERFNSLOGPROFILERSINK_H

@class NSString;
@protocol IMPerfProfilerSink;

#import <Foundation/Foundation.h>


@interface IMPerfNSLogProfilerSink : NSObject <IMPerfProfilerSink>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)instance;
-(?)perfProfilermeasurementDidFinish;


@end


#endif