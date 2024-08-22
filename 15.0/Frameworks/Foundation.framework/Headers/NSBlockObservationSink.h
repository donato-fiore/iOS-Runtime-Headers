// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSBLOCKOBSERVATIONSINK_H
#define NSBLOCKOBSERVATIONSINK_H



#import "NSObservationSink.h"

@interface NSBlockObservationSink : NSObservationSink {
    id *_block;
    int _tag;
}




-(id)initWithBlock:(id)arg0 tag:(int)arg1 ;
-(void)_receiveBox:(id)arg0 ;
-(void)dealloc;


@end


#endif