// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSSMARTQUOTEOPTIONS_H
#define NSSMARTQUOTEOPTIONS_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "NSString.h"

@interface NSSmartQuoteOptions : NSObject <NSCopying, NSSecureCoding>

 {
    NSString *_leftSingleQuote;
    NSString *_rightSingleQuote;
    NSString *_apostrophe;
    NSString *_leftDoubleQuote;
    NSString *_rightDoubleQuote;
}


@property (readonly, copy) NSString *apostrophe;
@property (readonly, copy) NSString *leftDoubleQuote;
@property (readonly, copy) NSString *leftSingleQuote;
@property (readonly, copy) NSString *rightDoubleQuote;
@property (readonly, copy) NSString *rightSingleQuote;


+(BOOL)supportsSecureCoding;
+(id)smartQuoteOptionsForLocale:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLeftSingleQuote:(id)arg0 rightSingleQuote:(id)arg1 apostrophe:(id)arg2 leftDoubleQuote:(id)arg3 rightDoubleQuote:(id)arg4 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif