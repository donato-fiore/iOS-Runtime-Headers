// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _HFDELETABLETRANSFORMITEM_H
#define _HFDELETABLETRANSFORMITEM_H

@class NSString;
@protocol HFItemDeletionProtocol, HFHomeObserver;


#import "HFTransformItem.h"

@interface _HFDeletableTransformItem : HFTransformItem <HFItemDeletionProtocol, HFHomeObserver>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)hf_canDeleteItem;
-(id)hf_deleteItem;


@end


#endif