// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXMEMORIESACTION_H
#define PXMEMORIESACTION_H

@protocol PXFastEnumeration;


#import "PXPhotosAction.h"

@interface PXMemoriesAction : PXPhotosAction {
    id<PXFastEnumeration> *_collections;
}




-(id)collections;
-(id)initWithMemories:(id)arg0 ;
// -(void)performMemoryChanges:(id)arg0 completionHandler:(unk)arg1  ;


@end


#endif