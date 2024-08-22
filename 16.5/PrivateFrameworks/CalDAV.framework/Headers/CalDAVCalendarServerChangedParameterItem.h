// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CALDAVCALENDARSERVERCHANGEDPARAMETERITEM_H
#define CALDAVCALENDARSERVERCHANGEDPARAMETERITEM_H

@class CoreDAVItemWithNoChildren, NSString;



@interface CalDAVCalendarServerChangedParameterItem : CoreDAVItemWithNoChildren

@property (retain, nonatomic) NSString *nameAttribute; // ivar: _nameAttribute
@property (retain, nonatomic) NSString *typeAttribute; // ivar: _typeAttribute


-(void)parserFoundAttributes:(id)arg0 ;


@end


#endif