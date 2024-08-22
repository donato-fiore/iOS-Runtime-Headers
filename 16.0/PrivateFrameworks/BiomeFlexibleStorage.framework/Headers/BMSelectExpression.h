// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BMSELECTEXPRESSION_H
#define BMSELECTEXPRESSION_H

@class NSArray;
@protocol BMTableQueryExpression;

#import <Foundation/Foundation.h>


@interface BMSelectExpression : NSObject <BMTableQueryExpression>



@property (retain, nonatomic) NSArray *children; // ivar: _children
@property (copy, nonatomic) NSArray *columnNames; // ivar: _columnNames


+(BOOL)supportsSecureCoding;
+(id)new;
-(id)init;
-(id)initWithChildren:(id)arg0 columnNames:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)queryTable:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif