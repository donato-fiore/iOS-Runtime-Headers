// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _GCDEVICEPRIMARYUSAGEMATCHINGFILTER_H
#define _GCDEVICEPRIMARYUSAGEMATCHINGFILTER_H

@class NSNumber, NSString;
@protocol _GCDeviceMatchingFilter;

#import <Foundation/Foundation.h>


@interface _GCDevicePrimaryUsageMatchingFilter : NSObject <_GCDeviceMatchingFilter>

 {
    NSNumber *_primaryUsagePage;
    NSNumber *_primaryUsage;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)match:(id)arg0 ;
-(id)identifier;
-(id)initWithPrimaryUsagePage:(id)arg0 PrimaryUsage:(id)arg1 ;


@end


#endif