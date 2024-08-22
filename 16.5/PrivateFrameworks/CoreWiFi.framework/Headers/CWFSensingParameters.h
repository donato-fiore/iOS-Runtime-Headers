// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CWFSENSINGPARAMETERS_H
#define CWFSENSINGPARAMETERS_H

@class NSArray, NSString;
@protocol CWFJSONEncodable, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CWFSensingParameters : NSObject <CWFJSONEncodable, NSCopying, NSSecureCoding>



@property (copy, nonatomic) NSArray *activityLabels; // ivar: _activityLabels
@property (copy, nonatomic) NSString *comment; // ivar: _comment
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) int matchFrameType; // ivar: _matchFrameType
@property (copy, nonatomic) NSArray *matchMACAddresses; // ivar: _matchMACAddresses
@property (nonatomic) NSInteger numberOfReports; // ivar: _numberOfReports
@property (copy, nonatomic) NSArray *placeLabels; // ivar: _placeLabels
@property (nonatomic) NSInteger scheduleDailyAt; // ivar: _scheduleDailyAt
@property (nonatomic) NSInteger scheduleOnceAfter; // ivar: _scheduleOnceAfter
@property (nonatomic) BOOL submitMetric; // ivar: _submitMetric
@property (readonly) Class superclass;
@property (nonatomic) NSInteger timeout; // ivar: _timeout


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToSensingParameters:(id)arg0 ;
-(id)JSONCompatibleKeyValueMap;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif