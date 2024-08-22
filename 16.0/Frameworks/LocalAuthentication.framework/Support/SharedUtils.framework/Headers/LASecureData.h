// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LASECUREDATA_H
#define LASECUREDATA_H


#import <Foundation/Foundation.h>


@interface LASecureData : NSObject {
    NSUInteger _allocatedLength;
    *void _bytes;
    NSUInteger _bytesLength;
}




+(id)secureDataWithBytes:(*void)arg0 length:(NSUInteger)arg1 ;
+(id)secureDataWithData:(id)arg0 ;
+(id)secureDataWithString:(id)arg0 ;
+(void)resetBytes:(*void)arg0 length:(NSUInteger)arg1 ;
-(*void)bytes;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)removeLastCharacter;
-(NSUInteger)length;
-(id)data;
-(id)init;
-(id)initWithBytes:(*void)arg0 length:(NSUInteger)arg1 ;
-(id)initWithData:(id)arg0 ;
-(id)initWithString:(id)arg0 ;
-(void)appendBytes:(*void)arg0 length:(NSUInteger)arg1 ;
-(void)appendData:(id)arg0 ;
-(void)appendString:(id)arg0 ;
-(void)dealloc;
-(void)prepareBuffer:(NSUInteger)arg0 ;
-(void)reset;
-(void)resize:(NSUInteger)arg0 ;


@end


#endif