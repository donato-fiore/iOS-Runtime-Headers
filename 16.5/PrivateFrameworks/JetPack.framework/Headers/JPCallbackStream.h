// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef JPCALLBACKSTREAM_H
#define JPCALLBACKSTREAM_H



#import "JPStream.h"

@interface JPCallbackStream : JPStream

@property (copy, nonatomic) id *readCallback; // ivar: _readCallback
@property (copy, nonatomic) id *seekForwardCallback; // ivar: _seekForwardCallback
@property (copy, nonatomic) id *seekToEndCallback; // ivar: _seekToEndCallback


// -(id)initWithReadCallback:(id)arg0 seekForwardCallback:(unk)arg1 seekToEndCallback:(id)arg2  ;


@end


#endif