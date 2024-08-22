// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLXPCSHMEMDATA_H
#define PLXPCSHMEMDATA_H

@class NSData;



@interface PLXPCShMemData : NSData {
    *void _buffer;
    NSUInteger _dataLength;
    NSUInteger _bufferLength;
}




-(*void)bytes;
-(NSUInteger)length;
-(id)description;
-(id)initWithXPCShmem:(id)arg0 ;
-(id)initWithXPCShmem:(id)arg0 length:(NSInteger)arg1 ;
-(void)dealloc;


@end


#endif