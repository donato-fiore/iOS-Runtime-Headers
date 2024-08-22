// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _PFRESULTASCIISTRING_H
#define _PFRESULTASCIISTRING_H

@class PFResultString;



@interface _PFResultASCIIString : PFResultString {
    unsigned int _length;
}




+(NSUInteger)bufferOffset;
+(void)initialize;
-(BOOL)_isCString;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToString:(id)arg0 ;
-(NSUInteger)cStringLength;
-(NSUInteger)hash;
-(NSUInteger)length;
-(char *)UTF8String;
-(unsigned short)characterAtIndex:(NSUInteger)arg0 ;
-(void)getCString:(char *)arg0 ;
-(void)getCharacters:(*unsigned short)arg0 ;
-(void)getCharacters:(*unsigned short)arg0 range:(struct _NSRange )arg1 ;


@end


#endif