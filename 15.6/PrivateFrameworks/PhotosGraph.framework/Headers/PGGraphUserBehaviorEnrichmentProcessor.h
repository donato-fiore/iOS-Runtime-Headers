// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGGRAPHUSERBEHAVIORENRICHMENTPROCESSOR_H
#define PGGRAPHUSERBEHAVIORENRICHMENTPROCESSOR_H

@class NSString;
@protocol PGGraphDataModelEnrichmentProcessor, OS_os_log;

#import <Foundation/Foundation.h>


@interface PGGraphUserBehaviorEnrichmentProcessor : NSObject <PGGraphDataModelEnrichmentProcessor>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<OS_os_log> *loggingConnection; // ivar: _loggingConnection
@property (readonly) Class superclass;


+(BOOL)supportsBackgroundJob;
+(CGFloat)backgroundJobTimeout;
+(id)backgroundJobName;
-(void)enrichDataModelWithManager:(id)arg0 curationContext:(id)arg1 graphUpdateInventory:(id)arg2 progressBlock:(id)arg3 ;


@end


#endif