// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef COREDAVPRINCIPALSEARCHPROPERTYITEM_H
#define COREDAVPRINCIPALSEARCHPROPERTYITEM_H



#import "CoreDAVItem.h"
#import "CoreDAVLeafItem.h"

@interface CoreDAVPrincipalSearchPropertyItem : CoreDAVItem

@property (retain, nonatomic) CoreDAVLeafItem *descriptionItem; // ivar: _descriptionItem
@property (retain, nonatomic) CoreDAVItem *prop; // ivar: _prop


+(id)copyParseRules;
-(id)description;
-(id)init;


@end


#endif