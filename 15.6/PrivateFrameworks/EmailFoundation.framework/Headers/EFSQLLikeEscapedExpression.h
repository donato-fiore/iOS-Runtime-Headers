// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EFSQLLIKEESCAPEDEXPRESSION_H
#define EFSQLLIKEESCAPEDEXPRESSION_H

@class NSString;
@protocol EFSQLValueExpressable;

#import <Foundation/Foundation.h>


@interface EFSQLLikeEscapedExpression : NSObject <EFSQLValueExpressable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *ef_SQLExpression;
@property (readonly, nonatomic) unsigned short escapeCharacter; // ivar: _escapeCharacter
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger pattern; // ivar: _pattern
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *value; // ivar: _value


-(id)ef_SQLIsolatedExpression;
-(id)initWithValue:(id)arg0 ;
-(id)initWithValue:(id)arg0 pattern:(NSUInteger)arg1 ;
-(id)initWithValue:(id)arg0 pattern:(NSUInteger)arg1 escapeCharacter:(unsigned short)arg2 ;
-(void)ef_renderSQLExpressionInto:(id)arg0 ;


@end


#endif