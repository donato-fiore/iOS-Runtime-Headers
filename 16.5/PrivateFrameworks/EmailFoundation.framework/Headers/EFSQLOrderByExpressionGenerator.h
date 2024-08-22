// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EFSQLORDERBYEXPRESSIONGENERATOR_H
#define EFSQLORDERBYEXPRESSIONGENERATOR_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface EFSQLOrderByExpressionGenerator : NSObject

@property (readonly, nonatomic) BOOL ascending; // ivar: _ascending
@property (readonly, nonatomic) NSArray *generators; // ivar: _generators


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToEFSQLOrderByExpressionGenerator:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithGenerators:(id)arg0 ascending:(BOOL)arg1 ;
-(id)orderByExpression;


@end


#endif