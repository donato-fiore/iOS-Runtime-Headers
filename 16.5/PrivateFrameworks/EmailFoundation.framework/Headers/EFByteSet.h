// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EFBYTESET_H
#define EFBYTESET_H

@protocol NSCopying, NSMutableCopying;

#import <Foundation/Foundation.h>


@interface EFByteSet : NSObject <NSCopying, NSMutableCopying>

 {
    bitset<256UL> _bitString;
}




+(id)asciiWhitespaceSet;
-(BOOL)byteIsMember:(unsigned char)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithBytes:(*void)arg0 length:(NSUInteger)arg1 ;
-(id)initWithCString:(char *)arg0 ;
-(id)initWithRange:(struct _NSRange )arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;


@end


#endif