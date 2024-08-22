// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CALDAVSCHEDULERESPONSEDETAILSITEM_H
#define CALDAVSCHEDULERESPONSEDETAILSITEM_H

@class CoreDAVItem, ICSDocument, CoreDAVItemWithHrefChildItem, NSString, CoreDAVLeafItem, CoreDAVErrorItem;



@interface CalDAVScheduleResponseDetailsItem : CoreDAVItem

@property (retain, nonatomic) ICSDocument *calendarData; // ivar: _calendarData
@property (retain, nonatomic) CoreDAVItemWithHrefChildItem *recipientHREF; // ivar: _recipientHREF
@property (readonly, nonatomic) NSString *recipientString;
@property (retain, nonatomic) CoreDAVLeafItem *requestStatus; // ivar: _requestStatus
@property (retain, nonatomic) NSString *responseDescription; // ivar: _responseDescription
@property (retain, nonatomic) CoreDAVErrorItem *topLevelErrorItem; // ivar: _topLevelErrorItem


-(id)copyParseRules;
-(id)description;


@end


#endif