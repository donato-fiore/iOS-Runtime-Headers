// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSPIPE_H
#define NSPIPE_H


#import <Foundation/Foundation.h>

#import "NSFileHandle.h"

@interface NSPipe : NSObject

@property (readonly, retain) NSFileHandle *fileHandleForReading;
@property (readonly, retain) NSFileHandle *fileHandleForWriting;


+(id)allocWithZone:(struct _NSZone *)arg0 ;
+(id)pipe;
-(id)init;
-(void)_closeOnDealloc;


@end


#endif