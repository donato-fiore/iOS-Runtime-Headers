// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DVTSTREAMMANAGER_H
#define DVTSTREAMMANAGER_H

@protocol DVTInputStream><DVTOutputStream, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface DVTStreamManager : NSObject {
    id<DVTInputStream><DVTOutputStream> *_stream;
    NSObject<OS_dispatch_queue> *_queue;
    NSUInteger _currentStreamSize;
}


@property (readonly) NSUInteger currentStreamSize;


-(NSInteger)commit:(*void)arg0 bufferSize:(NSUInteger)arg1 error:(*id)arg2 destructor:(id)arg3 ;
-(NSInteger)commit:(id)arg0 error:(*id)arg1 ;
-(id)export;
-(id)initWithStream:(id)arg0 ;


@end


#endif