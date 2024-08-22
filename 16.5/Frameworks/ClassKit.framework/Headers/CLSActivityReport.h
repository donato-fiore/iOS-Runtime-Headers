// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLSACTIVITYREPORT_H
#define CLSACTIVITYREPORT_H

@class NSArray, NSString;
@protocol NSSecureCoding, NSCopying;


#import "CLSReportItem.h"
#import "CLSActivityReportItem.h"
#import "CLSAggregatedValue.h"

@interface CLSActivityReport : CLSReportItem <NSSecureCoding, NSCopying>



@property (copy, nonatomic) NSArray *additionalReportItems; // ivar: _additionalReportItems
@property (copy, nonatomic) NSString *contextAppBundleIdentifier; // ivar: _contextAppBundleIdentifier
@property (copy, nonatomic) NSString *contextID; // ivar: _contextID
@property (copy, nonatomic) NSString *contextStableObjectID; // ivar: _contextStableObjectID
@property (copy, nonatomic) NSString *contextTitle; // ivar: _contextTitle
@property (copy, nonatomic) NSString *contextTopic; // ivar: _contextTopic
@property (nonatomic) NSInteger contextType; // ivar: _contextType
@property (nonatomic) int handoutAttachmentType; // ivar: _handoutAttachmentType
@property (copy, nonatomic) NSString *handoutAuthorizedObjectID; // ivar: _handoutAuthorizedObjectID
@property (copy, nonatomic) CLSActivityReportItem *primaryReportItem; // ivar: _primaryReportItem
@property (copy, nonatomic) CLSAggregatedValue *progress; // ivar: _progress
@property (copy, nonatomic) CLSAggregatedValue *time; // ivar: _time


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