// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MLCTENSORDATA_H
#define MLCTENSORDATA_H

@class NSData;

#import <Foundation/Foundation.h>


@interface MLCTensorData : NSObject

@property (readonly, nonatomic) *void bytes;
@property (retain, nonatomic) NSData *data; // ivar: _data
@property (readonly, nonatomic) NSUInteger length;


+(id)dataWithBytes:(*void)arg0 length:(NSUInteger)arg1 ;
+(id)dataWithBytesNoCopy:(*void)arg0 length:(NSUInteger)arg1 ;
+(id)dataWithBytesNoCopy:(*void)arg0 length:(NSUInteger)arg1 deallocator:(id)arg2 ;
+(id)dataWithBytesNoCopy:(*void)arg0 length:(NSUInteger)arg1 freeWhenDone:(BOOL)arg2 ;
+(id)dataWithImmutableBytesNoCopy:(*void)arg0 length:(NSUInteger)arg1 ;
-(id)initWithData:(*void)arg0 length:(NSUInteger)arg1 ;
-(id)initWithDataNoCopy:(*void)arg0 length:(NSUInteger)arg1 deallocator:(id)arg2 ;
-(id)initWithDataNoCopy:(*void)arg0 length:(NSUInteger)arg1 freeWhenDone:(BOOL)arg2 ;


@end


#endif