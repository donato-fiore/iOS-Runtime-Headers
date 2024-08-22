// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXEXISTINGMEMORIESDEBUGCOLLECTIONITEM_H
#define PXEXISTINGMEMORIESDEBUGCOLLECTIONITEM_H

@class NSString, PHMemory;

#import <Foundation/Foundation.h>


@interface PXExistingMemoriesDebugCollectionItem : NSObject

@property (readonly) NSString *description; // ivar: _description
@property (readonly) PHMemory *memory; // ivar: _memory
@property (readonly) NSString *name; // ivar: _name


-(id)initWithMemory:(id)arg0 ;


@end


#endif