// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EFSQLAGGREGATEFUNCTION_H
#define EFSQLAGGREGATEFUNCTION_H

@class NSArray, NSString;
@protocol EFSQLValueExpressable;

#import <Foundation/Foundation.h>


@interface EFSQLAggregateFunction : NSObject <EFSQLValueExpressable>



@property (readonly, copy, nonatomic) NSArray *arguments; // ivar: _arguments
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *ef_SQLExpression;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name
@property (readonly) Class superclass;


+(id)avg:(id)arg0 ;
+(id)avgDistinct:(id)arg0 ;
+(id)count:(id)arg0 ;
+(id)countDistinct:(id)arg0 ;
+(id)groupConcat:(id)arg0 separator:(id)arg1 ;
+(id)max:(id)arg0 ;
+(id)maxDistinct:(id)arg0 ;
+(id)min:(id)arg0 ;
+(id)minDistinct:(id)arg0 ;
+(id)sum:(id)arg0 ;
+(id)sumDistinct:(id)arg0 ;
+(id)total:(id)arg0 ;
+(id)totalDistinct:(id)arg0 ;
-(id)ef_SQLIsolatedExpression;
-(id)initWithName:(id)arg0 arguments:(id)arg1 ;
-(void)ef_renderSQLExpressionInto:(id)arg0 ;


@end


#endif