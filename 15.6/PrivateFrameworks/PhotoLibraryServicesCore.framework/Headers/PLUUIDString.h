// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLUUIDSTRING_H
#define PLUUIDSTRING_H

@class NSString;



@interface PLUUIDString : NSString {
    unsigned char _uuid;
    char _uuidString;
}




+(BOOL)parseUUIDString:(id)arg0 uuidBuffer:(char *)arg1 ;
+(id)UUIDString;
-(BOOL)isEqualToString:(id)arg0 ;
-(NSInteger)compare:(id)arg0 options:(NSUInteger)arg1 range:(struct _NSRange )arg2 locale:(id)arg3 ;
-(NSUInteger)length;
-(char *)UTF8String;
-(id)UUIDData;
-(id)init;
-(id)initWithCFUUID:(struct __CFUUID *)arg0 ;
-(id)initWithCFUUIDBytes:(struct ? )arg0 ;
-(id)initWithUUID:(unsigned char)arg0 ;
-(id)initWithUUIDData:(id)arg0 ;
-(struct ? )UUIDBytes;
-(unsigned short)characterAtIndex:(NSUInteger)arg0 ;
-(void)getCharacters:(*unsigned short)arg0 range:(struct _NSRange )arg1 ;


@end


#endif