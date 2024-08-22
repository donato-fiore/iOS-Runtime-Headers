// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LIVEFSMEMORYMAP_H
#define LIVEFSMEMORYMAP_H


#import <Foundation/Foundation.h>


@interface LiveFSMemoryMap : NSObject

@property (readonly) NSUInteger address; // ivar: _address
@property unsigned int port; // ivar: _port
@property (readonly) NSUInteger size; // ivar: _size


+(id)newWithPort:(unsigned int)arg0 address:(NSUInteger)arg1 andSize:(NSUInteger)arg2 ;
-(id)initWithPort:(unsigned int)arg0 address:(NSUInteger)arg1 andSize:(NSUInteger)arg2 ;
-(void)dealloc;


@end


#endif