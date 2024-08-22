// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ESDBLIPCONTEXT_H
#define ESDBLIPCONTEXT_H

@class NSString;
@protocol OCDDelayedMediaContext;

#import <Foundation/Foundation.h>


@interface ESDBlipContext : NSObject <OCDDelayedMediaContext>

 {
    *SsrwOOStream mStream;
    unsigned int mStreamID;
    unsigned int mStartOffset;
    unsigned int mByteCount;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)loadDelayedNode:(id)arg0 ;
-(BOOL)saveDelayedMedia:(id)arg0 toFile:(id)arg1 ;
-(id)dataRep;
-(id)initWithOffset:(unsigned int)arg0 byteCount:(unsigned int)arg1 stream:(struct SsrwOOStream *)arg2 streamID:(unsigned int)arg3 ;
-(struct SsrwOOStream *)stream;


@end


#endif