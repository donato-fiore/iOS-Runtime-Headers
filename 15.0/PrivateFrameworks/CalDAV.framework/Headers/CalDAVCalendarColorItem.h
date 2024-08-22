// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CALDAVCALENDARCOLORITEM_H
#define CALDAVCALENDARCOLORITEM_H

@class CoreDAVItem, NSString;



@interface CalDAVCalendarColorItem : CoreDAVItem

@property (retain, nonatomic) NSString *colorString;
@property (retain, nonatomic) NSString *symbolicColorName; // ivar: _symbolicColorName


-(id)init;
-(void)parserFoundAttributes:(id)arg0 ;
-(void)write:(id)arg0 ;


@end


#endif