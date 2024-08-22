// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MBDIGEST_H
#define MBDIGEST_H


#import <Foundation/Foundation.h>


@interface MBDigest : NSObject



+(NSInteger)simpleChecksumForString:(id)arg0 ;
+(id)sha1;
+(id)sha1ForData:(id)arg0 ;
+(id)sha1ForFileAtPath:(id)arg0 error:(*id)arg1 ;
+(id)sha1ForString:(id)arg0 ;
+(id)sha1HmacForString:(id)arg0 key:(id)arg1 ;
+(id)sha256;
-(BOOL)updateWithFile:(id)arg0 error:(*id)arg1 ;
-(id)digestForData:(id)arg0 ;
-(id)digestForFileAtPath:(id)arg0 error:(*id)arg1 ;
-(id)digestForString:(id)arg0 ;
-(id)final;
-(void)finalWithBytes:(*void)arg0 length:(NSUInteger)arg1 ;
-(void)updateWithBytes:(*void)arg0 length:(NSUInteger)arg1 ;
-(void)updateWithData:(id)arg0 ;
-(void)updateWithDate:(id)arg0 ;
-(void)updateWithInt32:(int)arg0 ;
-(void)updateWithInt64:(NSInteger)arg0 ;
-(void)updateWithString:(id)arg0 ;


@end


#endif