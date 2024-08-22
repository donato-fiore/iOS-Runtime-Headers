// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSDINSTANTALPHABINARYBITMAP_H
#define TSDINSTANTALPHABINARYBITMAP_H


#import <Foundation/Foundation.h>


@interface TSDInstantAlphaBinaryBitmap : NSObject {
    NSInteger mWidth;
    NSInteger mHeight;
    NSInteger mRowBytes;
    char * mData;
}




-(id)initWithWidth:(NSInteger)arg0 height:(NSInteger)arg1 ;
-(void)dealloc;
-(void)unionWithBitmap:(id)arg0 ;


@end


#endif