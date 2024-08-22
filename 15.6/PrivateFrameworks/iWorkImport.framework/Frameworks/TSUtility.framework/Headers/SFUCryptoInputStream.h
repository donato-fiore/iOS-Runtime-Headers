// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SFUCRYPTOINPUTSTREAM_H
#define SFUCRYPTOINPUTSTREAM_H

@class NSString;
@protocol SFUInputStream;

#import <Foundation/Foundation.h>

#import "SFUCryptor.h"

@interface SFUCryptoInputStream : NSObject <SFUInputStream>

 {
    id<SFUInputStream> *mBaseStream;
    SFUCryptor *mCryptor;
    NSInteger mOffset;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)canSeek;
-(NSInteger)offset;
-(NSUInteger)readToBuffer:(char *)arg0 size:(NSUInteger)arg1 ;
-(id)closeLocalStream;
-(id)initForDecryptionWithInputStream:(id)arg0 key:(id)arg1 ;
-(void)close;
-(void)dealloc;
-(void)disableSystemCaching;
-(void)enableSystemCaching;
-(void)seekToOffset:(NSInteger)arg0 ;


@end


#endif