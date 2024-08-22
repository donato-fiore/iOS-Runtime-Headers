// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC10CHRONOCORE4TASK_H
#define _TTC10CHRONOCORE4TASK_H

@class NSString;

#import <Foundation/Foundation.h>


@interface _TtC10ChronoCore4Task : NSObject {
    ? requiredDataProtectionLevel;
    ? schedulingConfiguration;
    ? schedulingOptions;
    ? powerlogWakeReason;
    ? target;
    ? cost;
    ? allowCostOverride;
    ? identifier;
    ? taskIdentifier;
    ? logDigest;
    ? syncWorkItem;
    ? asyncWorkItem;
    ? completion;
}


@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSInteger hash;


-(BOOL)isEqual:(id)arg0 ;
-(id)init;


@end


#endif