// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AMDBYTEBUFFER_H
#define AMDBYTEBUFFER_H

@class NSInputStream;

#import <Foundation/Foundation.h>


@interface AMDByteBuffer : NSObject

@property NSUInteger fileSize; // ivar: _fileSize
@property (retain, nonatomic) NSInputStream *inputStream; // ivar: _inputStream
@property NSUInteger readPosition; // ivar: _readPosition


-(BOOL)hasRemaining;
-(NSInteger)getLongWithError:(*id)arg0 ;
-(id)getDataOfLength:(int)arg0 error:(*id)arg1 ;
-(id)initWithInputStream:(id)arg0 withFileSize:(NSUInteger)arg1 ;
-(int)getIntWithError:(*id)arg0 ;
-(short)getShortWithError:(*id)arg0 ;
-(unsigned char)getByteWithError:(*id)arg0 ;
-(void)copyDataOfLength:(NSUInteger)arg0 toFile:(id)arg1 isCompressed:(BOOL)arg2 error:(*id)arg3 ;


@end


#endif