// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATCIOA2STREAM_H
#define ATCIOA2STREAM_H

@class IOKService, IOKConnection, NSArray;

#import <Foundation/Foundation.h>

#import "ATCIOA2StreamFormat.h"

@interface ATCIOA2Stream : NSObject {
    IOKService *_service;
    IOKConnection *_connection;
    NSUInteger _index;
    unsigned int _physicalID;
}


@property (readonly, copy, nonatomic) NSArray *availableFormats; // ivar: _availableFormats
@property (readonly, copy, nonatomic) ATCIOA2StreamFormat *currentFormat; // ivar: _currentFormat
@property (readonly, nonatomic, getter=isInput) BOOL input; // ivar: _input
@property (readonly, nonatomic) unsigned int startingChannel; // ivar: _startingChannel


-(id)initWithService:(id)arg0 connection:(id)arg1 index:(NSUInteger)arg2 input:(BOOL)arg3 description:(id)arg4 ;


@end


#endif