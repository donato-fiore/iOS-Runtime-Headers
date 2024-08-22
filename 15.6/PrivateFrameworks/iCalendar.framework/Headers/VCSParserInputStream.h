// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VCSPARSERINPUTSTREAM_H
#define VCSPARSERINPUTSTREAM_H

@class NSData;

#import <Foundation/Foundation.h>


@interface VCSParserInputStream : NSObject {
    NSData *_dataStream;
    BOOL _discardBuffer;
    _NSRange _buffer;
    int _currentLineNum;
    unsigned int _seek;
}




-(BOOL)isContinued;
-(NSUInteger)getLine:(char *)arg0 withSize:(*NSUInteger)arg1 ;
-(NSUInteger)loadLineBuffer;
-(id)errorStr:(NSUInteger)arg0 ;
-(id)initWithData:(id)arg0 ;
-(int)lineNum;


@end


#endif