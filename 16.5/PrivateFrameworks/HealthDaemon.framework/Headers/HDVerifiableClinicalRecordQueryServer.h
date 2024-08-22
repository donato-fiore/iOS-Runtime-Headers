// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDVERIFIABLECLINICALRECORDQUERYSERVER_H
#define HDVERIFIABLECLINICALRECORDQUERYSERVER_H

@class NSArray;


#import "HDQueryServer.h"

@interface HDVerifiableClinicalRecordQueryServer : HDQueryServer

@property (readonly, nonatomic) NSArray *recordTypes; // ivar: _recordTypes
@property (readonly, nonatomic) NSArray *sourceTypes; // ivar: _sourceTypes


+(BOOL)validateConfiguration:(id)arg0 client:(id)arg1 error:(*id)arg2 ;
+(Class)queryClass;
+(id)requiredEntitlements;
-(id)initWithUUID:(id)arg0 configuration:(id)arg1 client:(id)arg2 delegate:(id)arg3 ;
-(void)_queue_start;


@end


#endif