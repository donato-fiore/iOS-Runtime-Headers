// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NWACTIVITYEMPTYTRIGGER_H
#define NWACTIVITYEMPTYTRIGGER_H

@class PBCodable;

#import <Foundation/Foundation.h>


@interface NWActivityEmptyTrigger : NSObject

@property (nonatomic) unsigned int awdMetricID; // ivar: _awdMetricID
@property (retain, nonatomic) PBCodable *awdReport; // ivar: _awdReport


-(id)initWithPBCodableData:(id)arg0 ;


@end


#endif