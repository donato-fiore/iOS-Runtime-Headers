// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CLSPROGRESSEVENT_H
#define CLSPROGRESSEVENT_H

@class NSString;


#import "CLSInsightEvent.h"
#import "CLSActivityReportItem.h"
#import "CLSRange.h"
#import "CLSTimeInterval.h"

@interface CLSProgressEvent : CLSInsightEvent

@property (copy, nonatomic) CLSActivityReportItem *activityItemInfo; // ivar: _activityItemInfo
@property (copy, nonatomic) NSString *appIdentifier;
@property (copy, nonatomic) NSString *attachmentID; // ivar: _attachmentID
@property (copy, nonatomic) NSString *classID; // ivar: _classID
@property (nonatomic) NSInteger contextType; // ivar: _contextType
@property (nonatomic) int handoutAttachmentType; // ivar: _handoutAttachmentType
@property (copy, nonatomic) NSString *handoutAuthorizedObjectID; // ivar: _handoutAuthorizedObjectID
@property (copy, nonatomic) NSString *handoutID; // ivar: _handoutID
@property (copy, nonatomic) NSString *objectIDPath; // ivar: _objectIDPath
@property (copy, nonatomic) NSString *primaryActivityItemIdentifier; // ivar: _primaryActivityItemIdentifier
@property (copy, nonatomic) CLSRange *rangeInfo; // ivar: _rangeInfo
@property (copy, nonatomic) NSString *recipientPersonID; // ivar: _recipientPersonID
@property (retain, nonatomic) CLSTimeInterval *timeIntervalInfo; // ivar: _timeIntervalInfo


+(BOOL)supportsSecureCoding;
-(BOOL)validateObject:(*id)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithAttachmentID:(id)arg0 classID:(id)arg1 handoutID:(id)arg2 eventType:(NSInteger)arg3 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)mergeWithObject:(id)arg0 ;


@end


#endif