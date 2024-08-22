// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SRFRAMESTORE_H
#define SRFRAMESTORE_H

@class NSString, NSFileHandle;
@protocol NSFastEnumeration;

#import <Foundation/Foundation.h>

#import "SRMemoryMapping.h"

@interface SRFrameStore : NSObject <NSFastEnumeration>

 {
    unsigned int _datastoreVersion;
    SRMemoryMapping *_frames;
    SRMemoryMapping *_header;
    NSUInteger _permission;
    NSString *_segmentName;
    CGFloat _lastAbsoluteTimestamp;
    NSFileHandle *_backingFile;
}




+(void)initialize;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(void)dealloc;


@end


#endif