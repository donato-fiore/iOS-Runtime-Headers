// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TRIPBCODEDINPUTSTREAM_H
#define TRIPBCODEDINPUTSTREAM_H

@class NSData;

#import <Foundation/Foundation.h>


@interface TRIPBCodedInputStream : NSObject {
    TRIPBCodedInputStreamState state_;
    NSData *buffer_;
}




+(id)streamWithData:(id)arg0 ;
-(BOOL)isAtEnd;
-(BOOL)readBool;
-(BOOL)skipField:(int)arg0 ;
-(CGFloat)readDouble;
-(NSInteger)readInt64;
-(NSInteger)readSFixed64;
-(NSInteger)readSInt64;
-(NSUInteger)position;
-(NSUInteger)pushLimit:(NSUInteger)arg0 ;
-(NSUInteger)readFixed64;
-(NSUInteger)readUInt64;
-(float)readFloat;
-(id)initWithData:(id)arg0 ;
-(id)readBytes;
-(id)readString;
-(int)readEnum;
-(int)readInt32;
-(int)readSFixed32;
-(int)readSInt32;
-(int)readTag;
-(unsigned int)readFixed32;
-(unsigned int)readUInt32;
-(void)checkLastTagWas:(int)arg0 ;
-(void)dealloc;
-(void)popLimit:(NSUInteger)arg0 ;
-(void)readGroup:(int)arg0 message:(id)arg1 extensionRegistry:(id)arg2 ;
-(void)readMapEntry:(id)arg0 extensionRegistry:(id)arg1 field:(id)arg2 parentMessage:(id)arg3 ;
-(void)readMessage:(id)arg0 extensionRegistry:(id)arg1 ;
-(void)readUnknownGroup:(int)arg0 message:(id)arg1 ;
-(void)skipMessage;


@end


#endif