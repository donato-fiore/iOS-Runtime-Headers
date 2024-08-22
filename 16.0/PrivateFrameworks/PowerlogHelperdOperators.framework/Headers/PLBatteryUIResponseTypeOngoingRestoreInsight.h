// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLBATTERYUIRESPONSETYPEONGOINGRESTOREINSIGHT_H
#define PLBATTERYUIRESPONSETYPEONGOINGRESTOREINSIGHT_H

@class NSString;
@protocol PLBatteryUIResponseProtocol;

#import <Foundation/Foundation.h>

#import "PLBatteryUIResponderService.h"

@interface PLBatteryUIResponseTypeOngoingRestoreInsight : NSObject <PLBatteryUIResponseProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) PLBatteryUIResponderService *responderService; // ivar: _responderService
@property BOOL suggest; // ivar: _suggest
@property (readonly) Class superclass;


-(id)dependencies;
-(id)result;
-(void)coalesce;
-(void)configure:(id)arg0 ;
-(void)run;


@end


#endif