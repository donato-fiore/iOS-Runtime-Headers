// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLKUIMMAPFILE_H
#define CLKUIMMAPFILE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface CLKUIMmapFile : NSObject

@property (readonly, nonatomic) *void bytes; // ivar: _bytes
@property (readonly, nonatomic) int descriptor; // ivar: _descriptor
@property (readonly, nonatomic) NSUInteger length; // ivar: _length
@property (readonly, nonatomic) NSString *path; // ivar: _path


+(id)mmapFileWithPath:(id)arg0 ;
-(id)initWithPath:(id)arg0 descriptor:(int)arg1 length:(NSUInteger)arg2 bytes:(*void)arg3 ;
-(void)dealloc;


@end


#endif