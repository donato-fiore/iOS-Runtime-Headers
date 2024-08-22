// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CPMEMORYOWNER_H
#define CPMEMORYOWNER_H

@protocol CPDisposable;

#import <Foundation/Foundation.h>


@interface CPMemoryOwner : NSObject <CPDisposable>

 {
    *void memory;
}




-(id)initWithAllocatedMemory:(*void)arg0 ;
-(void)dealloc;
-(void)dispose;
-(void)finalize;


@end


#endif