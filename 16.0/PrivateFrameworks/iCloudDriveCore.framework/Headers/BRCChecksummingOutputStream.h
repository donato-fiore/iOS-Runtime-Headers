// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BRCCHECKSUMMINGOUTPUTSTREAM_H
#define BRCCHECKSUMMINGOUTPUTSTREAM_H

@class NSOutputStream, NSData;



@interface BRCChecksummingOutputStream : NSOutputStream {
    CC_SHA1state_st _ctx;
    unsigned char _sig;
    BOOL _isOpen;
}


@property (readonly, nonatomic) NSData *signature;


+(id)checksummingOutputStreamWithTag:(unsigned char)arg0 ;
-(BOOL)hasSpaceAvailable;
-(NSInteger)write:(char *)arg0 maxLength:(NSUInteger)arg1 ;
-(NSUInteger)streamStatus;
-(id)initWithTag:(unsigned char)arg0 ;
-(void)close;
-(void)open;


@end


#endif