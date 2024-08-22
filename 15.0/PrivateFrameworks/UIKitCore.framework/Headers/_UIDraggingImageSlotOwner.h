// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIDRAGGINGIMAGESLOTOWNER_H
#define _UIDRAGGINGIMAGESLOTOWNER_H

@class NSMutableArray;

#import <Foundation/Foundation.h>

#import "_UIDragManager.h"

@interface _UIDraggingImageSlotOwner : NSObject {
    NSMutableArray *_usedSlotIDs;
}


@property (readonly, weak, nonatomic) _UIDragManager *dragManager; // ivar: _dragManager


-(id)initWithDragManager:(id)arg0 ;
-(unsigned int)uploadImage:(struct CGImage *)arg0 ;
-(void)dealloc;


@end


#endif