// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TMLPARSERTOKEN_H
#define TMLPARSERTOKEN_H

@class NSString;

#import <Foundation/Foundation.h>


@interface TMLParserToken : NSObject

@property (readonly, nonatomic) NSString *text; // ivar: _text
@property (readonly, nonatomic) NSUInteger token; // ivar: _token


-(id)description;
-(id)initWithToken:(NSUInteger)arg0 text:(id)arg1 ;


@end


#endif