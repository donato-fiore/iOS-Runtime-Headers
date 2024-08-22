// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UINIBCODERVALUE_H
#define UINIBCODERVALUE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface UINibCoderValue : NSObject {
    NSString *key;
    unsigned int scope;
    char type;
    ? value;
    NSUInteger length;
}




+(id)nibValueForBoolean:(BOOL)arg0 key:(id)arg1 scope:(unsigned int)arg2 ;
+(id)nibValueForBytes:(*void)arg0 length:(NSUInteger)arg1 key:(id)arg2 scope:(unsigned int)arg3 ;
+(id)nibValueForDouble:(CGFloat)arg0 key:(id)arg1 scope:(unsigned int)arg2 ;
+(id)nibValueForFloat:(float)arg0 key:(id)arg1 scope:(unsigned int)arg2 ;
+(id)nibValueForInt16:(unsigned short)arg0 key:(id)arg1 scope:(unsigned int)arg2 ;
+(id)nibValueForInt32:(unsigned int)arg0 key:(id)arg1 scope:(unsigned int)arg2 ;
+(id)nibValueForInt64:(NSUInteger)arg0 key:(id)arg1 scope:(unsigned int)arg2 ;
+(id)nibValueForInt8:(unsigned char)arg0 key:(id)arg1 scope:(unsigned int)arg2 ;
+(id)nibValueForInteger:(NSUInteger)arg0 key:(id)arg1 scope:(unsigned int)arg2 ;
+(id)nibValueForObjectReference:(NSInteger)arg0 key:(id)arg1 scope:(unsigned int)arg2 ;
+(id)nibValueRepresentingNilReferenceForKey:(id)arg0 scope:(unsigned int)arg1 ;
-(NSUInteger)byteLength;
-(void)dealloc;


@end


#endif