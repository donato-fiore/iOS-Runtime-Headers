// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VKINTERNEDSTRING_H
#define VKINTERNEDSTRING_H

@class NSString;



@interface VKInternedString : NSString {
    NSString *original;
}




+(id)stringWithString:(id)arg0 ;
+(void)initialize;
-(BOOL)isEqualToString:(id)arg0 ;
-(NSInteger)compare:(id)arg0 options:(NSUInteger)arg1 range:(struct _NSRange )arg2 locale:(id)arg3 ;
-(NSUInteger)hash;
-(NSUInteger)length;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithString:(id)arg0 ;
-(id)substringFromIndex:(NSUInteger)arg0 ;
-(id)substringToIndex:(NSUInteger)arg0 ;
-(id)substringWithRange:(struct _NSRange )arg0 ;
-(unsigned short)characterAtIndex:(NSUInteger)arg0 ;
-(void)dealloc;
-(void)getCharacters:(*unsigned short)arg0 range:(struct _NSRange )arg1 ;


@end


#endif