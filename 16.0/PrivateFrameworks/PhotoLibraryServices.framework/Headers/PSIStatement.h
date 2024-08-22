// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PSISTATEMENT_H
#define PSISTATEMENT_H


#import <Foundation/Foundation.h>


@interface PSIStatement : NSObject

@property (readonly) *sqlite3_stmt stmt; // ivar: _stmt


-(CGFloat)doubleAtColumn:(NSUInteger)arg0 ;
-(NSInteger)int64AtColumn:(NSUInteger)arg0 ;
-(id)initWithSQLite3Stmt:(struct sqlite3_stmt *)arg0 ;
-(id)textAtColumn:(NSUInteger)arg0 ;
-(void)bindDouble:(CGFloat)arg0 atIndex:(NSUInteger)arg1 ;
-(void)bindInt64:(NSInteger)arg0 atIndex:(NSUInteger)arg1 ;
-(void)bindText:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)dealloc;
-(void)finalizze;


@end


#endif