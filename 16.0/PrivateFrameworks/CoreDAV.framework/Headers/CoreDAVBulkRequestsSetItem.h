// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef COREDAVBULKREQUESTSSETITEM_H
#define COREDAVBULKREQUESTSSETITEM_H

@class NSDictionary;


#import "CoreDAVItem.h"
#import "CoreDAVBulkRequestsItem.h"

@interface CoreDAVBulkRequestsSetItem : CoreDAVItem

@property (retain, nonatomic) CoreDAVBulkRequestsItem *crudItem; // ivar: _crudItem
@property (readonly, nonatomic) NSDictionary *dictRepresentation;
@property (retain, nonatomic) CoreDAVBulkRequestsItem *simpleItem; // ivar: _simpleItem


+(id)copyParseRules;
-(id)description;
-(id)init;


@end


#endif