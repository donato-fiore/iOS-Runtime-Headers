// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CALDAVCOMPITEM_H
#define CALDAVCOMPITEM_H

@class CoreDAVItem, NSString;



@interface CalDAVCompItem : CoreDAVItem

@property (retain, nonatomic) NSString *nameAttribute; // ivar: _nameAttribute


-(id)init;
-(void)parserFoundAttributes:(id)arg0 ;
-(void)write:(id)arg0 ;


@end


#endif