// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSWPOBFUSCATEDFONTDATAPROVIDER_H
#define TSWPOBFUSCATEDFONTDATAPROVIDER_H

@class NSInputStream;

#import <Foundation/Foundation.h>


@interface TSWPObfuscatedFontDataProvider : NSObject {
    NSInputStream *_stream;
    unsigned char _xorMask;
}




-(NSInteger)p_currentOffset;
-(NSInteger)skipForwardBy:(NSInteger)arg0 ;
-(NSUInteger)readBytes:(char *)arg0 count:(NSUInteger)arg1 ;
-(id)initWithPath:(id)arg0 groupUID:(id)arg1 ;
-(void)dealloc;
-(void)rewind;


@end


#endif