// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDDATASTREAMHAPPENDINGWRITE_H
#define HMDDATASTREAMHAPPENDINGWRITE_H

@class NSData;

#import <Foundation/Foundation.h>


@interface HMDDataStreamHAPPendingWrite : NSObject

@property NSUInteger bytesWritten; // ivar: _bytesWritten
@property (readonly) id *completion; // ivar: _completion
@property (readonly, copy) NSData *data; // ivar: _data


-(BOOL)isComplete;
-(id)initWithData:(id)arg0 completion:(id)arg1 ;
-(id)popNextFrameUpToMaxLength:(NSUInteger)arg0 ;


@end


#endif