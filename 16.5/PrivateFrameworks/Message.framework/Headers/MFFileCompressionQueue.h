// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MFFILECOMPRESSIONQUEUE_H
#define MFFILECOMPRESSIONQUEUE_H

@class NSString, NSMutableArray;
@protocol EFLoggable;

#import <Foundation/Foundation.h>


@interface MFFileCompressionQueue : NSObject <EFLoggable>

 {
    os_unfair_lock_s _fileCompressionQueueLock;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSMutableArray *fileCompressionQueue; // ivar: _fileCompressionQueue
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)log;
+(id)sharedInstance;
-(BOOL)hasNext;
-(NSInteger)size;
-(id)init;
-(id)nextFile;
-(void)addFile:(id)arg0 ;


@end


#endif