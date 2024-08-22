// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SPRTLV_H
#define SPRTLV_H

@class NSData, NSArray;

#import <Foundation/Foundation.h>


@interface SPRTLV : NSObject {
    unsigned int _tag;
    NSData *_value;
    NSArray *_children;
}


@property (readonly, nonatomic) NSArray *children;
@property (readonly, nonatomic) unsigned int tag;
@property (readonly, nonatomic) NSData *value;


+(id)TLVSsWithBytes:(*void)arg0 length:(NSUInteger)arg1 requireDefiniteEncoding:(BOOL)arg2 ;
+(id)TLVWithData:(id)arg0 simple:(BOOL)arg1 ;
+(id)TLVWithTag:(unsigned int)arg0 children:(id)arg1 ;
+(id)TLVWithTag:(unsigned int)arg0 fromData:(id)arg1 ;
+(id)TLVWithTag:(unsigned int)arg0 unsignedChar:(unsigned char)arg1 ;
+(id)TLVWithTag:(unsigned int)arg0 unsignedLongValue:(unsigned int)arg1 ;
+(id)TLVWithTag:(unsigned int)arg0 value:(id)arg1 ;
+(id)TLVsWithData:(id)arg0 ;
+(id)TLVsWithData:(id)arg0 requireDefiniteEncoding:(BOOL)arg1 ;
+(id)_intToData:(unsigned int)arg0 ;
+(id)_parseTLVs:(*char *)arg0 end:(char *)arg1 simple:(BOOL)arg2 definite:(BOOL)arg3 ;
+(id)simpleTLVsWithData:(id)arg0 ;
+(id)simpleTLVsWithTag:(unsigned int)arg0 fromData:(id)arg1 ;
-(BOOL)containsTag:(unsigned int)arg0 ;
-(BOOL)containsValue:(id)arg0 ;
-(id)asData;
-(id)asMutableData;
-(id)childWithTag:(unsigned int)arg0 ;
-(id)childrenWithTag:(unsigned int)arg0 ;
-(id)description;


@end


#endif