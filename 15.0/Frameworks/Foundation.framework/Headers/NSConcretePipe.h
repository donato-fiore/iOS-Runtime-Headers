// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSCONCRETEPIPE_H
#define NSCONCRETEPIPE_H



#import "NSPipe.h"
#import "NSFileHandle.h"

@interface NSConcretePipe : NSPipe {
    NSFileHandle *_readHandle;
    NSFileHandle *_writeHandle;
}




-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)fileHandleForReading;
-(id)fileHandleForWriting;
-(id)init;
-(void)_closeOnDealloc;
-(void)dealloc;


@end


#endif