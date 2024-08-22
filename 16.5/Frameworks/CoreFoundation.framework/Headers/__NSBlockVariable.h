// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef __NSBLOCKVARIABLE_H
#define __NSBLOCKVARIABLE_H


#import <Foundation/Foundation.h>


@interface __NSBlockVariable : NSObject {
    *Block_byref forwarding;
    int flags;
    int size;
    *unk byref_keep;
    *unk byref_destroy;
    id *containedObject;
}






@end


#endif