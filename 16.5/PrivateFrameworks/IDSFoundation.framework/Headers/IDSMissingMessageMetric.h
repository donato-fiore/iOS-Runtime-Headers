// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IDSMISSINGMESSAGEMETRIC_H
#define IDSMISSINGMESSAGEMETRIC_H

@class NSDictionary, NSNumber, NSString;

#import <Foundation/Foundation.h>


@interface IDSMissingMessageMetric : NSObject

@property (readonly, nonatomic) NSDictionary *additionalInfo; // ivar: _additionalInfo
@property (readonly, nonatomic) NSNumber *command;
@property (readonly, nonatomic) NSString *guid; // ivar: _guid
@property (readonly, nonatomic) NSDictionary *payload;
@property (readonly, nonatomic) NSInteger reason; // ivar: _reason
@property (readonly, nonatomic) NSString *service; // ivar: _service


-(BOOL)_isInternal;
-(BOOL)_shouldReportMetricForExternal;
-(BOOL)_shouldReportReason;
-(BOOL)_shouldReportReasonForExternal;
-(BOOL)shouldReportMetric;
-(id)initWithReason:(NSInteger)arg0 guid:(id)arg1 service:(id)arg2 additionalInformation:(id)arg3 ;


@end


#endif