// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PHIMPORTTIMERCOLLECTION_H
#define PHIMPORTTIMERCOLLECTION_H

@class NSMutableArray, NSMutableIndexSet;

#import <Foundation/Foundation.h>


@interface PHImportTimerCollection : NSObject {
    unsigned char _mediaType;
    NSUInteger _fileSize;
    NSMutableArray *_timers;
    NSMutableIndexSet *_runningTimers;
}


@property unsigned char aspectRatio; // ivar: _aspectRatio


-(CGFloat)duration:(unsigned char)arg0 ;
-(id)description;
-(id)initForMediaType:(unsigned char)arg0 fileSize:(NSUInteger)arg1 ;
-(id)startTiming:(unsigned char)arg0 subtype:(unsigned char)arg1 ;
-(void)processTimesOfType:(unsigned char)arg0 withBlock:(id)arg1 ;
-(void)stopTiming:(id)arg0 ;


@end


#endif