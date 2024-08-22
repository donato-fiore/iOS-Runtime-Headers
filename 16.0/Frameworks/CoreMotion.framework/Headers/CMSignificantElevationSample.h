// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CMSIGNIFICANTELEVATIONSAMPLE_H
#define CMSIGNIFICANTELEVATIONSAMPLE_H

@class NSNumber, NSDate, NSUUID;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CMSignificantElevationSample : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSNumber *elevationAscended; // ivar: fElevationAscended
@property (readonly, nonatomic) NSNumber *elevationDescended; // ivar: fElevationDescended
@property (readonly, nonatomic) NSDate *endDate; // ivar: fEndDate
@property (readonly, nonatomic) NSUInteger recordId; // ivar: fRecordId
@property (readonly, nonatomic) NSUUID *sourceId; // ivar: fSourceId
@property (readonly, nonatomic) NSDate *startDate; // ivar: fStartDate


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFilteredElevation:(struct CLElevationChangeEntry *)arg0 ;
-(id)initWithRecordId:(NSUInteger)arg0 sourceId:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 elevationAscended:(id)arg4 elevationDescended:(id)arg5 ;
-(id)initWithSignificantElevation:(struct CLSignificantElevation *)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif