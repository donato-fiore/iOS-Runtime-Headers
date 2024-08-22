// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BLOCKDEALLOCATOR_H
#define BLOCKDEALLOCATOR_H


#import <Foundation/Foundation.h>


@interface BlockDeallocator : NSObject {
    id *_block;
}




-(id)initWithBlock:(id)arg0 ;
-(void)dealloc;


@end


#endif