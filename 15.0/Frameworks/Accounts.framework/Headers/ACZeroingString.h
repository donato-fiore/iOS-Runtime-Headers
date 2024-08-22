// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ACZEROINGSTRING_H
#define ACZEROINGSTRING_H

@class NSString;



@interface ACZeroingString : NSString {
    NSUInteger _length;
}


@property (readonly) *unsigned short characters; // ivar: _characters
@property (readonly) NSUInteger length;


+(BOOL)supportsSecureCoding;
+(Class)classForKeyedUnarchiver;
+(id)_emptyString;
-(BOOL)_allowsDirectEncoding;
-(Class)classForCoder;
-(Class)classForKeyedArchiver;
-(id)_compatibleCopy;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithBytes:(*void)arg0 length:(NSUInteger)arg1 encoding:(NSUInteger)arg2 ;
-(id)initWithCharacters:(*unsigned short)arg0 length:(NSUInteger)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithString:(id)arg0 ;
-(id)initWithUTF8String:(char *)arg0 ;
-(id)replacementObjectForCoder:(id)arg0 ;
-(unsigned short)characterAtIndex:(NSUInteger)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)getCharacters:(*unsigned short)arg0 range:(struct _NSRange )arg1 ;


@end


#endif