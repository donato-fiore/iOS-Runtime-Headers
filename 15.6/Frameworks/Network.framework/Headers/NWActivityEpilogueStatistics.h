// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NWACTIVITYEPILOGUESTATISTICS_H
#define NWACTIVITYEPILOGUESTATISTICS_H

@class NSUUID, PBCodable, NSString;

#import <Foundation/Foundation.h>

#import "NWDeviceReport.h"
#import "NWL2Report.h"

@interface NWActivityEpilogueStatistics : NSObject

@property (retain, nonatomic) NSUUID *activityUUID; // ivar: _activityUUID
@property (nonatomic) unsigned int awdMetricID; // ivar: _awdMetricID
@property (retain, nonatomic) PBCodable *awdReport; // ivar: _awdReport
@property (retain, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) int completionReason;
@property (retain, nonatomic) NWDeviceReport *deviceReport; // ivar: _deviceReport
@property (readonly, nonatomic) unsigned int domain;
@property (readonly, nonatomic) NSUInteger durationMsecs;
@property (retain, nonatomic) NSUUID *externallyVisibleActivityUUID; // ivar: _externallyVisibleActivityUUID
@property (retain, nonatomic) NSUUID *externallyVisibleParentUUID; // ivar: _externallyVisibleParentUUID
@property (readonly, nonatomic) unsigned int fragmentsQuenched;
@property (readonly, nonatomic) NSUInteger investigation_identifier;
@property (readonly, nonatomic) unsigned int label;
@property (retain, nonatomic) NWL2Report *layer2Report; // ivar: _layer2Report
@property (retain, nonatomic) NSUUID *parentUUID; // ivar: _parentUUID
@property (nonatomic) nw_activity_epilogue_report_s report; // ivar: _report
@property (readonly, nonatomic) BOOL retry;
@property (readonly, nonatomic) int underlyingErrorCode;
@property (readonly, nonatomic) int underlyingErrorDomain;


+(id)createActivityEpilogue:(struct nw_activity_epilogue_report_s )arg0 ;
-(id)initWithNWActivityEpilogueReport:(struct nw_activity_epilogue_report_s *)arg0 length:(NSUInteger)arg1 ;
-(id)initWithPBCodableData:(id)arg0 ;


@end


#endif