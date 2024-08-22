// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AMSSQLITEQUERYRESULTS_H
#define AMSSQLITEQUERYRESULTS_H

@class NSString, NSNumber;
@protocol AMSSQLiteBinding;

#import <Foundation/Foundation.h>

#import "AMSSQLiteStatement.h"

@interface AMSSQLiteQueryResults : NSObject <AMSSQLiteBinding>

 {
    AMSSQLiteStatement *_statement;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSInteger firstInt64Value;
@property (readonly, copy, nonatomic) NSNumber *firstNumberValue;
@property (readonly, nonatomic) BOOL hasRows;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithStatement:(id)arg0 ;
-(int)clearBindings;
-(void)bindArray:(id)arg0 atPosition:(int)arg1 ;
-(void)bindData:(id)arg0 atPosition:(int)arg1 ;
-(void)bindDataCopy:(id)arg0 atPosition:(int)arg1 ;
-(void)bindDate:(id)arg0 atPosition:(int)arg1 ;
-(void)bindDictionary:(id)arg0 atPosition:(int)arg1 ;
-(void)bindDouble:(CGFloat)arg0 atPosition:(int)arg1 ;
-(void)bindFloat:(float)arg0 atPosition:(int)arg1 ;
-(void)bindInt64:(NSInteger)arg0 atPosition:(int)arg1 ;
-(void)bindInt:(int)arg0 atPosition:(int)arg1 ;
-(void)bindNullAtPosition:(int)arg0 ;
-(void)bindNullableString:(id)arg0 atPosition:(int)arg1 ;
-(void)bindNumber:(id)arg0 atPosition:(int)arg1 ;
-(void)bindString:(id)arg0 atPosition:(int)arg1 ;
-(void)bindStringCopy:(id)arg0 atPosition:(int)arg1 ;
-(void)bindURL:(id)arg0 atPosition:(int)arg1 ;
-(void)enumerateRowsUsingBlock:(id)arg0 ;


@end


#endif