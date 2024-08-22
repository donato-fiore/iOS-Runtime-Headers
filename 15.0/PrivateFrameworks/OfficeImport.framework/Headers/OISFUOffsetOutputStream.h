// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OISFUOFFSETOUTPUTSTREAM_H
#define OISFUOFFSETOUTPUTSTREAM_H

@class NSString;
@protocol SFUOutputStream;

#import <Foundation/Foundation.h>


@interface OISFUOffsetOutputStream : NSObject <SFUOutputStream>

 {
    id<SFUOutputStream> *mOutputStream;
    NSInteger mInitialOffset;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)canCreateInputStream;
-(BOOL)canSeek;
-(NSInteger)offset;
-(id)closeLocalStream;
-(id)initWithOutputStream:(id)arg0 ;
-(id)inputStream;
-(void)close;
-(void)dealloc;
-(void)seekToOffset:(NSInteger)arg0 whence:(int)arg1 ;
-(void)writeBuffer:(char *)arg0 size:(NSUInteger)arg1 ;


@end


#endif