// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SGTOKENSTRING_H
#define SGTOKENSTRING_H

@class NSString;



@interface SGTokenString : NSString {
    BOOL _isASCII;
    BOOL _length;
    ? _contents;
}


@property (nonatomic) int confidence; // ivar: _confidence
@property (nonatomic) _NSRange range; // ivar: _range


+(id)stringWithString:(id)arg0 ;
+(id)stringWithString:(id)arg0 range:(struct _NSRange )arg1 ;
+(id)stringWithString:(id)arg0 range:(struct _NSRange )arg1 confidence:(int)arg2 ;
-(*unsigned short)_fastCharacterContents;
-(NSUInteger)fastestEncoding;
-(NSUInteger)length;
-(char *)UTF8String;
-(char *)_fastCStringContents:(BOOL)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)stringWithNewContents:(id)arg0 ;
-(unsigned short)characterAtIndex:(NSUInteger)arg0 ;
-(void)getCharacters:(*unsigned short)arg0 range:(struct _NSRange )arg1 ;


@end


#endif