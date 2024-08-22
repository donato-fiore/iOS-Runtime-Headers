// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef COREDAVITEMWITHHREFCHILDITEM_H
#define COREDAVITEMWITHHREFCHILDITEM_H



#import "CoreDAVItem.h"
#import "CoreDAVHrefItem.h"

@interface CoreDAVItemWithHrefChildItem : CoreDAVItem

@property (retain, nonatomic) CoreDAVHrefItem *href; // ivar: _href


+(id)copyParseRules;
-(id)description;
-(void)write:(id)arg0 ;


@end


#endif