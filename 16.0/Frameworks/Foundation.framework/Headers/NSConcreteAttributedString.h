// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSCONCRETEATTRIBUTEDSTRING_H
#define NSCONCRETEATTRIBUTEDSTRING_H



#import "NSAttributedString.h"
#import "NSString.h"
#import "NSRLEArray.h"

@interface NSConcreteAttributedString : NSAttributedString {
    NSString *string;
    NSRLEArray *attributes;
}




-(NSUInteger)length;
-(id)_runArrayHoldingAttributes;
-(id)attribute:(id)arg0 atIndex:(NSUInteger)arg1 effectiveRange:(struct _NSRange *)arg2 ;
-(id)attributesAtIndex:(NSUInteger)arg0 effectiveRange:(struct _NSRange *)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithAttributedString:(id)arg0 ;
-(id)initWithString:(id)arg0 ;
-(id)initWithString:(id)arg0 attributes:(id)arg1 ;
-(id)string;
-(void)dealloc;


@end


#endif