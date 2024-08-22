// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFREMOTECONTENTITEM_H
#define WFREMOTECONTENTITEM_H

@class NSDictionary;


#import "WFGenericFileContentItem.h"

@interface WFRemoteContentItem : WFGenericFileContentItem

@property (copy, nonatomic) NSDictionary *serializedItem; // ivar: _serializedItem


+(id)itemWithSerializedItem:(id)arg0 forType:(id)arg1 named:(id)arg2 attributionSet:(id)arg3 cachingIdentifier:(id)arg4 ;
-(id)initWithSerializedItem:(id)arg0 named:(id)arg1 attributionSet:(id)arg2 cachingIdentifier:(id)arg3 ;
-(id)metadataForSerialization;
-(id)name;
-(id)preferredFileType;


@end


#endif