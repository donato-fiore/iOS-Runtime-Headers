// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CALDAVCALENDARSERVERALLOWEDSHARINGMODESITEM_H
#define CALDAVCALENDARSERVERALLOWEDSHARINGMODESITEM_H

@class CoreDAVItem, CoreDAVItemWithNoChildren;



@interface CalDAVCalendarServerAllowedSharingModesItem : CoreDAVItem

@property (retain, nonatomic) CoreDAVItemWithNoChildren *canBePublished; // ivar: _canBePublished
@property (retain, nonatomic) CoreDAVItemWithNoChildren *canBeShared; // ivar: _canBeShared
@property (retain, nonatomic) CoreDAVItemWithNoChildren *isMarkedImmutableSharees; // ivar: _isMarkedImmutableSharees
@property (retain, nonatomic) CoreDAVItemWithNoChildren *isMarkedUndeletable; // ivar: _isMarkedUndeletable


-(id)copyParseRules;
-(id)init;


@end


#endif