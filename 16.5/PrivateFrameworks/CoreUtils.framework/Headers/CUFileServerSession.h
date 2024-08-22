// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CUFILESERVERSESSION_H
#define CUFILESERVERSESSION_H


#import <Foundation/Foundation.h>


@interface CUFileServerSession : NSObject {
    char _dirPath;
}


@property (nonatomic) *? dirStream; // ivar: _dirStream
@property (nonatomic) NSUInteger lastRequestTicks; // ivar: _lastRequestTicks
@property (nonatomic) NSUInteger sessionID; // ivar: _sessionID




@end


#endif