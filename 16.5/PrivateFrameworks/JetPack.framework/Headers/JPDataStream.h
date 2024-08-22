// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef JPDATASTREAM_H
#define JPDATASTREAM_H

@class NSData;


#import "JPStream.h"

@interface JPDataStream : JPStream

@property (readonly, nonatomic) NSData *data; // ivar: _data


-(id)initWithData:(id)arg0 ;


@end


#endif