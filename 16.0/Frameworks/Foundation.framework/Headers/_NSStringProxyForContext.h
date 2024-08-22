// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _NSSTRINGPROXYFORCONTEXT_H
#define _NSSTRINGPROXYFORCONTEXT_H



#import "NSString.h"
#import "NSFormatter.h"

@interface _NSStringProxyForContext : NSString

@property (copy) NSFormatter *formatter; // ivar: _formatter
@property (copy) id *item; // ivar: _item
@property (copy) NSString *string; // ivar: _string


-(NSUInteger)length;
-(id)_dynamicContextEvaluation:(id)arg0 patternString:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(unsigned short)characterAtIndex:(NSUInteger)arg0 ;
-(void)_retainFormatter:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)getCharacters:(*unsigned short)arg0 range:(struct _NSRange )arg1 ;


@end


#endif