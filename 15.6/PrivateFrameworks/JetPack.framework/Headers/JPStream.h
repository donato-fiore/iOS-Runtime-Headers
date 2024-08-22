// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef JPSTREAM_H
#define JPSTREAM_H


#import <Foundation/Foundation.h>


@interface JPStream : NSObject

@property (readonly, nonatomic) *JetPackStream backing; // ivar: _backing
@property (readonly, nonatomic) BOOL releaseBackingOnDealloc; // ivar: _releaseBackingOnDealloc


-(BOOL)writeToFile:(id)arg0 blockSize:(NSUInteger)arg1 error:(*id)arg2 ;
-(NSUInteger)readBytes:(char *)arg0 length:(NSUInteger)arg1 ;
-(id)initWithBacking:(struct JetPackStream *)arg0 releaseOnDealloc:(BOOL)arg1 ;
-(id)readData;
-(id)readDataWithLength:(NSUInteger)arg0 ;
-(void)dealloc;


@end


#endif