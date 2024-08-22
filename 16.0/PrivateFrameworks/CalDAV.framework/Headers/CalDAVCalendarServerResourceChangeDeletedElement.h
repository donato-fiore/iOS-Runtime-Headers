// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CALDAVCALENDARSERVERRESOURCECHANGEDELETEDELEMENT_H
#define CALDAVCALENDARSERVERRESOURCECHANGEDELETEDELEMENT_H

@class NSString, ICSDateValue;


#import "CalDAVCalendarServerResourceChangeElement.h"

@interface CalDAVCalendarServerResourceChangeDeletedElement : CalDAVCalendarServerResourceChangeElement

@property (retain, nonatomic) NSString *componentType; // ivar: _componentType
@property (retain, nonatomic) NSString *displayName; // ivar: _displayName
@property (nonatomic) BOOL hadMoreInstances; // ivar: _hadMoreInstances
@property (retain, nonatomic) ICSDateValue *nextInstance; // ivar: _nextInstance
@property (retain, nonatomic) NSString *summary; // ivar: _summary


-(id)copyParseRules;
-(id)init;
-(void)setDeletedDetails:(id)arg0 ;


@end


#endif