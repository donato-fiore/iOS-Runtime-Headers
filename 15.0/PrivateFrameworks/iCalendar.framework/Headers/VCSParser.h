// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VCSPARSER_H
#define VCSPARSER_H


#import <Foundation/Foundation.h>


@interface VCSParser : NSObject



+(NSUInteger)beginVCSEntity:(id)arg0 withParseState:(id)arg1 ;
+(NSUInteger)decodeVCSLine:(id)arg0 withParseState:(id)arg1 ;
+(NSUInteger)endVCSEntity:(id)arg0 withParseState:(id)arg1 ;
+(id)parseVCSData:(id)arg0 ;
+(id)parseVCSFile:(id)arg0 ;
+(void)_fixEntitiesRelationshipForParseState:(id)arg0 ;


@end


#endif