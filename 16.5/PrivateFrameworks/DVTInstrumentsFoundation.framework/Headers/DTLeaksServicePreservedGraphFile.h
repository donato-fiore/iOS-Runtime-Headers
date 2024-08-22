// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DTLEAKSSERVICEPRESERVEDGRAPHFILE_H
#define DTLEAKSSERVICEPRESERVEDGRAPHFILE_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface DTLeaksServicePreservedGraphFile : NSObject

@property (nonatomic) int fd; // ivar: _fd
@property (copy, nonatomic) NSDictionary *metaDict; // ivar: _metaDict
@property (nonatomic) NSUInteger size; // ivar: _size
@property (nonatomic) NSUInteger token; // ivar: _token


-(void)dealloc;


@end


#endif