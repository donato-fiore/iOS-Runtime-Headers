// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef COREDAVSETITEM_H
#define COREDAVSETITEM_H



#import "CoreDAVItem.h"

@interface CoreDAVSetItem : CoreDAVItem

@property (retain, nonatomic) CoreDAVItem *prop; // ivar: _prop


+(id)copyParseRules;
-(id)description;
-(id)init;


@end


#endif