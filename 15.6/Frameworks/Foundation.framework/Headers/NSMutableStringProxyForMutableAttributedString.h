// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSMUTABLESTRINGPROXYFORMUTABLEATTRIBUTEDSTRING_H
#define NSMUTABLESTRINGPROXYFORMUTABLEATTRIBUTEDSTRING_H



#import "NSMutableString.h"
#import "NSMutableAttributedString.h"

@interface NSMutableStringProxyForMutableAttributedString : NSMutableString {
    NSMutableAttributedString *mutableAttributedString;
}




-(NSUInteger)length;
-(id)initWithMutableAttributedString:(id)arg0 ;
-(unsigned short)characterAtIndex:(NSUInteger)arg0 ;
-(void)dealloc;
-(void)getCharacters:(*unsigned short)arg0 range:(struct _NSRange )arg1 ;
-(void)replaceCharactersInRange:(struct _NSRange )arg0 withString:(id)arg1 ;


@end


#endif