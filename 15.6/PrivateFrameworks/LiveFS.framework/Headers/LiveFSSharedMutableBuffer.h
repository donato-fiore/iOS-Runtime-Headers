// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef LIVEFSSHAREDMUTABLEBUFFER_H
#define LIVEFSSHAREDMUTABLEBUFFER_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "LiveFSMemoryMap.h"

@interface LiveFSSharedMutableBuffer : NSObject <NSSecureCoding>

 {
    NSUInteger _vma;
    NSUInteger _capacity;
    NSUInteger _length;
    unsigned int _mp;
    BOOL _isIOWMD;
    LiveFSMemoryMap *_memMap;
}


@property NSUInteger length;


+(BOOL)supportsSecureCoding;
+(id)bufferWithCapacity:(NSUInteger)arg0 ;
+(id)bufferWithLength:(NSUInteger)arg0 ;
+(id)dataWithCapacity:(NSUInteger)arg0 ;
+(id)dataWithLength:(NSUInteger)arg0 ;
+(id)newByCopyingPort:(unsigned int)arg0 ;
-(*void)bytes;
-(*void)mutableBytes;
-(BOOL)ensureMapped;
-(BOOL)ensureMappedIOMD;
-(BOOL)ensureMappedMB:(NSUInteger)arg0 ;
-(Class)classForCoder;
-(id)createDispatchData;
-(id)initWithCapacity:(NSUInteger)arg0 ;
-(id)initWithCapacity:(NSUInteger)arg0 andLength:(NSUInteger)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLength:(NSUInteger)arg0 ;
-(id)initWithMachPort:(unsigned int)arg0 capacity:(NSUInteger)arg1 length:(NSUInteger)arg2 wrapsIOWMD:(BOOL)arg3 ;
-(void)createMappingAt:(NSUInteger)arg0 options:(unsigned int)arg1 startingAtOffset:(NSUInteger)arg2 forLength:(NSUInteger)arg3 completionHandler:(id)arg4 ;
-(void)createMappingForVMAAt:(NSUInteger)arg0 options:(unsigned int)arg1 startingAtOffset:(NSUInteger)arg2 forLength:(NSUInteger)arg3 completionHandler:(id)arg4 ;
-(void)dealloc;
-(void)detachBytes;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif