// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CSMICUSAGEREPORTER_H
#define CSMICUSAGEREPORTER_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CSMicUsageReporter : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue


-(id)init;
-(void)_reportsDynamicActivityAttribute:(NSUInteger)arg0 bundleId:(id)arg1 ;
-(void)reportMicUsage:(BOOL)arg0 ;
-(void)reportsDynamicActivityAttributeAsync:(NSUInteger)arg0 bundleId:(id)arg1 ;
-(void)reportsDynamicActivityAttributeSync:(NSUInteger)arg0 bundleId:(id)arg1 ;


@end


#endif