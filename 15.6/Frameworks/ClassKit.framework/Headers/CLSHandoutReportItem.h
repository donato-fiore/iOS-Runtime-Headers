// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CLSHANDOUTREPORTITEM_H
#define CLSHANDOUTREPORTITEM_H

@class NSArray, NSString, NSDate;
@protocol NSSecureCoding, NSCopying;


#import "CLSReportItem.h"
#import "CLSActivityReport.h"

@interface CLSHandoutReportItem : CLSReportItem <NSSecureCoding, NSCopying>



@property (copy, nonatomic) NSArray *additionalActivityReports; // ivar: _additionalActivityReports
@property (copy, nonatomic) NSString *attachmentID; // ivar: _attachmentID
@property (readonly, nonatomic) NSUInteger changeHash; // ivar: _changeHash
@property (copy, nonatomic) NSString *classID; // ivar: _classID
@property (nonatomic, getter=isCompleted) BOOL completed; // ivar: _completed
@property (retain, nonatomic) NSDate *endDate; // ivar: _endDate
@property (nonatomic) int granularity; // ivar: _granularity
@property (copy, nonatomic) NSString *handoutID; // ivar: _handoutID
@property (copy, nonatomic) CLSActivityReport *primaryActivityReport; // ivar: _primaryActivityReport
@property (copy, nonatomic) NSString *reportID; // ivar: _reportID
@property (retain, nonatomic) NSDate *startDate; // ivar: _startDate
@property (copy, nonatomic) NSString *studentID; // ivar: _studentID
@property (nonatomic) int type; // ivar: _type


+(BOOL)supportsSecureCoding;
-(NSInteger)compare:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(void)add:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)scalarMultiply:(CGFloat)arg0 ;


@end


#endif