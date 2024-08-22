// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BMNOTIFICATIONSTREAM_H
#define BMNOTIFICATIONSTREAM_H


#import <Foundation/Foundation.h>

#import "BMStoreStream.h"

@interface BMNotificationStream : NSObject {
    BMStoreStream *_storeStream;
}




-(id)identifier;
-(id)init;
-(id)publisherFromStartTime:(CGFloat)arg0 ;
-(id)source;


@end


#endif