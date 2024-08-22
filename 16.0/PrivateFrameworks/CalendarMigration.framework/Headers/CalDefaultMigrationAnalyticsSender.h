// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CALDEFAULTMIGRATIONANALYTICSSENDER_H
#define CALDEFAULTMIGRATIONANALYTICSSENDER_H

@class NSString;
@protocol CalMigrationAnalyticsSender;

#import <Foundation/Foundation.h>


@interface CalDefaultMigrationAnalyticsSender : NSObject <CalMigrationAnalyticsSender>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(void)sendEvent:(id)arg0 withPayload:(id)arg1 ;


@end


#endif