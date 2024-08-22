// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OKACTIONSCROLL_H
#define OKACTIONSCROLL_H

@protocol NSSecureCoding;


#import "OKAction.h"

@interface OKActionScroll : OKAction <NSSecureCoding>





+(BOOL)supportsSecureCoding;
+(id)scrollWith:(struct CGPoint )arg0 ;
+(void)setupJavascriptContext:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif