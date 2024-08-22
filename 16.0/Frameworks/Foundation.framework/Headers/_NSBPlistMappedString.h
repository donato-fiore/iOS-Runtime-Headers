// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _NSBPLISTMAPPEDSTRING_H
#define _NSBPLISTMAPPEDSTRING_H



#import "NSString.h"

@interface _NSBPlistMappedString : NSString {
    NSUInteger payload;
}




+(id)createStringWithOffset:(NSInteger)arg0 intoMappingData:(id)arg1 ;
+(void)initialize;
-(NSUInteger)fastestEncoding;
-(NSUInteger)length;
-(NSUInteger)smallestEncoding;
-(char *)_fastCStringContents:(BOOL)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(unsigned short)characterAtIndex:(NSUInteger)arg0 ;
-(void)getCharacters:(*unsigned short)arg0 range:(struct _NSRange )arg1 ;


@end


#endif