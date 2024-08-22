// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BMFRAME_H
#define BMFRAME_H

@class NSData, NSString;

#import <Foundation/Foundation.h>


@interface BMFrame : NSObject

@property (readonly, nonatomic) CGFloat creationTimestamp;
@property (readonly, nonatomic) NSData *data; // ivar: _data
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly, nonatomic) ? frameHeader; // ivar: _frameHeader
@property (readonly, nonatomic) *void framePtr; // ivar: _framePtr
@property (readonly, nonatomic) CGFloat modifiedTimestamp;
@property (readonly, nonatomic) NSUInteger nextOffset; // ivar: _nextOffset
@property (readonly, nonatomic) NSUInteger offset; // ivar: _offset
@property (readonly, nonatomic) unsigned int state;
@property (readonly, nonatomic) NSString *storePath; // ivar: _storePath


-(id)initWithHeader:(struct ? )arg0 storePath:(id)arg1 data:(id)arg2 framePtr:(*void)arg3 offset:(NSUInteger)arg4 nextOffset:(NSUInteger)arg5 ;


@end


#endif