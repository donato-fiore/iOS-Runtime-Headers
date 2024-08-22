// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef COREDAVPROPFINDITEM_H
#define COREDAVPROPFINDITEM_H



#import "CoreDAVItem.h"
#import "CoreDAVItemWithNoChildren.h"

@interface CoreDAVPropFindItem : CoreDAVItem

@property (retain, nonatomic) CoreDAVItemWithNoChildren *allProp; // ivar: _allProp
@property (retain, nonatomic) CoreDAVItem *include; // ivar: _include
@property (retain, nonatomic) CoreDAVItem *prop; // ivar: _prop
@property (retain, nonatomic) CoreDAVItemWithNoChildren *propName; // ivar: _propName


+(id)copyParseRules;
-(id)description;
-(id)init;


@end


#endif