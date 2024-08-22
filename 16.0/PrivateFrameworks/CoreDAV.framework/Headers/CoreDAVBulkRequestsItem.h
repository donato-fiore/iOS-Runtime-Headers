// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef COREDAVBULKREQUESTSITEM_H
#define COREDAVBULKREQUESTSITEM_H

@class NSDictionary, NSSet;


#import "CoreDAVItem.h"
#import "CoreDAVLeafItem.h"

@interface CoreDAVBulkRequestsItem : CoreDAVItem

@property (readonly, nonatomic) NSDictionary *dictRepresentation;
@property (readonly, nonatomic) NSInteger maxResources;
@property (retain, nonatomic) CoreDAVLeafItem *maxResourcesItem; // ivar: _maxResourcesItem
@property (readonly, nonatomic) NSInteger maxSize;
@property (retain, nonatomic) CoreDAVLeafItem *maxSizeItem; // ivar: _maxSizeItem
@property (readonly, nonatomic) NSSet *supportedItems; // ivar: _supportedItems
@property (readonly, nonatomic) BOOL supportsDelete;
@property (readonly, nonatomic) BOOL supportsInsert;
@property (readonly, nonatomic) BOOL supportsUpdate;


+(id)copyParseRules;
-(BOOL)supportsItemWithNameSpace:(id)arg0 name:(id)arg1 ;
-(id)description;
-(id)init;
-(void)addSupportedItem:(id)arg0 ;


@end


#endif