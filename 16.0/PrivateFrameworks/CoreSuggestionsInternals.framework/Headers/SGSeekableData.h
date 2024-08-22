// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SGSEEKABLEDATA_H
#define SGSEEKABLEDATA_H

@class NSData, NSString;
@protocol SGSeekable;

#import <Foundation/Foundation.h>


@interface SGSeekableData : NSObject <SGSeekable>

 {
    NSData *_data;
    *void _bytes;
    NSUInteger _length;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger offsetInFile; // ivar: _offsetInFile
@property (readonly) Class superclass;


-(*void)dataOfLength:(NSUInteger)arg0 ;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithMemoryMappedPath:(id)arg0 ;
-(id)initWithMemoryMappedPath:(id)arg0 error:(*id)arg1 ;
-(void)seekToFileOffset:(NSUInteger)arg0 ;


@end


#endif