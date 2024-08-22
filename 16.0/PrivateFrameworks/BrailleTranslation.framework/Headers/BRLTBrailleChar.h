// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BRLTBRAILLECHAR_H
#define BRLTBRAILLECHAR_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface BRLTBrailleChar : NSObject <NSCopying>

 {
    unsigned char _bits;
}


@property (readonly) unsigned char bits;
@property BOOL dot1;
@property BOOL dot2;
@property BOOL dot3;
@property BOOL dot4;
@property BOOL dot5;
@property BOOL dot6;
@property BOOL dot7;
@property BOOL dot8;
@property (readonly) NSString *unicode;


+(id)charWithBits:(unsigned char)arg0 ;
+(id)charWithBrf:(id)arg0 ;
+(id)charWithUnichar:(unsigned short)arg0 ;
+(id)charWithUnicode:(id)arg0 ;
-(BOOL)_dotUp:(int)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToBrailleChar:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithBits:(unsigned char)arg0 ;
-(id)initWithBrf:(id)arg0 ;
-(id)initWithUnichar:(unsigned short)arg0 ;
-(id)initWithUnicode:(id)arg0 ;
-(void)_setDot:(int)arg0 up:(BOOL)arg1 ;


@end


#endif