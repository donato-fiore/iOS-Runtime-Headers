// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef COREDAVBULKREQUESTSSUPPORTEDITEM_H
#define COREDAVBULKREQUESTSSUPPORTEDITEM_H



#import "CoreDAVItem.h"

@interface CoreDAVBulkRequestsSupportedItem : CoreDAVItem

@property (retain, nonatomic) CoreDAVItem *supported; // ivar: _supported


+(id)copyParseRules;
-(id)description;
-(id)init;


@end


#endif