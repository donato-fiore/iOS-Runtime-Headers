// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _PFENCODEDSTRING_H
#define _PFENCODEDSTRING_H

@class PFAbstractString;



@interface _PFEncodedString : PFAbstractString {
    int _cd_rc;
    unsigned int _length;
    id *_sourceData;
}




-(BOOL)_isCString;
-(BOOL)_isDeallocating;
-(BOOL)_tryRetain;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToString:(id)arg0 ;
-(NSUInteger)cStringLength;
-(NSUInteger)hash;
-(NSUInteger)length;
-(NSUInteger)retainCount;
-(char *)UTF8String;
-(id)copy;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)retain;
-(unsigned short)characterAtIndex:(NSUInteger)arg0 ;
-(void)dealloc;
-(void)getCString:(char *)arg0 ;
-(void)getCharacters:(*unsigned short)arg0 ;
-(void)getCharacters:(*unsigned short)arg0 range:(struct _NSRange )arg1 ;
-(void)release;


@end


#endif