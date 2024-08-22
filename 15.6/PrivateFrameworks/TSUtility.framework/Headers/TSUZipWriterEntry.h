// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSUZIPWRITERENTRY_H
#define TSUZIPWRITERENTRY_H

@class NSString;

#import <Foundation/Foundation.h>


@interface TSUZipWriterEntry : NSObject

@property (nonatomic) unsigned int CRC; // ivar: _CRC
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (nonatomic) NSUInteger offset; // ivar: _offset
@property (nonatomic) NSUInteger size; // ivar: _size




@end


#endif