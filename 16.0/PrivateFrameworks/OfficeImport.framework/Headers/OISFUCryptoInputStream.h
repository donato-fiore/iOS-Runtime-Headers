// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OISFUCRYPTOINPUTSTREAM_H
#define OISFUCRYPTOINPUTSTREAM_H

@class NSString;
@protocol SFUInputStream;

#import <Foundation/Foundation.h>

#import "OISFUCryptor.h"

@interface OISFUCryptoInputStream : NSObject <SFUInputStream>

 {
    id<SFUInputStream> *mBaseStream;
    OISFUCryptor *mCryptor;
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