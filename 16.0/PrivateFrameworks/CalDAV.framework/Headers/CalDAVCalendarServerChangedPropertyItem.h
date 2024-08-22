// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CALDAVCALENDARSERVERCHANGEDPROPERTYITEM_H
#define CALDAVCALENDARSERVERCHANGEDPROPERTYITEM_H

@class CoreDAVItem, NSMutableSet, NSString;



@interface CalDAVCalendarServerChangedPropertyItem : CoreDAVItem

@property (retain, nonatomic) NSMutableSet *changedParameters; // ivar: _changedParameters
@property (retain, nonatomic) NSString *nameAttribute; // ivar: _nameAttribute
@property (retain, nonatomic) NSString *typeAttribute; // ivar: _typeAttribute


-(id)copyParseRules;
-(id)initWithNameSpace:(id)arg0 andName:(id)arg1 ;
-(void)addChangedParameter:(id)arg0 ;
-(void)parserFoundAttributes:(id)arg0 ;


@end


#endif