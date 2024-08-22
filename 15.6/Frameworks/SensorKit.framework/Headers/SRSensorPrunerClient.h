// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SRSENSORPRUNERCLIENT_H
#define SRSENSORPRUNERCLIENT_H

@protocol SRSensorKitServiceClientPruning;

#import <Foundation/Foundation.h>

#import "SRSensorPruner.h"

@interface SRSensorPrunerClient : NSObject <SRSensorKitServiceClientPruning>



@property (weak) SRSensorPruner *pruner; // ivar: _pruner


+(id)prunerClientWithPruner:(id)arg0 ;
-(id)initWithPruner:(id)arg0 ;
-(void)resetDatastoreFiles:(id)arg0 ;


@end


#endif