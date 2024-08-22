// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WSPFREECURSORIN_H
#define WSPFREECURSORIN_H


#import <Foundation/Foundation.h>


@interface wspFreeCursorIn : NSObject {
    ? msghdr;
}


@property unsigned int cursorToFree; // ivar: _cursorToFree


-(id)initWithCursor:(unsigned int)arg0 ;
-(int)encodeBuffer:(id)arg0 BufferOffset:(unsigned int)arg1 BytesWritten:(*unsigned int)arg2 ;


@end


#endif