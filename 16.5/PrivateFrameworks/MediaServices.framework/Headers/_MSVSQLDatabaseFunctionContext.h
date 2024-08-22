// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _MSVSQLDATABASEFUNCTIONCONTEXT_H
#define _MSVSQLDATABASEFUNCTIONCONTEXT_H

@class NSString;
@protocol NSObject;

#import <Foundation/Foundation.h>


@interface _MSVSQLDatabaseFunctionContext : NSObject <NSObject>

 {
    *sqlite3_context _context;
    int _argc;
    ? _argv;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger numberOfArguments;
@property (readonly) Class superclass;


-(BOOL)boolValueAtArgumentIndex:(NSInteger)arg0 ;
-(BOOL)isNullValueAtArgumentIndex:(NSInteger)arg0 ;
-(CGFloat)doubleValueAtArgumentIndex:(NSInteger)arg0 ;
-(NSInteger)int64ValueAtArgumentIndex:(NSInteger)arg0 ;
-(NSUInteger)uint64ValueAtArgumentIndex:(NSInteger)arg0 ;
-(float)floatValueAtArgumentIndex:(NSInteger)arg0 ;
-(id)dataValueAtArgumentIndex:(NSInteger)arg0 ;
-(id)dateValueAtArgumentIndex:(NSInteger)arg0 ;
-(id)functionContextOfClass:(Class)arg0 atArgumentIndex:(NSInteger)arg1 ;
-(id)jsonDataAtArgumentIndex:(NSInteger)arg0 ;
-(id)jsonValueAtArgumentIndex:(NSInteger)arg0 error:(*id)arg1 ;
-(id)memoizedObjectForArgumentIndex:(NSInteger)arg0 ;
-(id)objectValueAtArgumentIndex:(NSInteger)arg0 ;
-(id)returnBool:(BOOL)arg0 ;
-(id)returnData:(id)arg0 ;
-(id)returnDate:(id)arg0 ;
-(id)returnDouble:(CGFloat)arg0 ;
-(id)returnError:(id)arg0 ;
-(id)returnError:(id)arg0 sqliteCode:(int)arg1 ;
-(id)returnErrorNoMemory;
-(id)returnErrorTooBig;
-(id)returnFloat:(float)arg0 ;
-(id)returnFunctionContext:(id)arg0 ;
-(id)returnInt64:(NSInteger)arg0 ;
-(id)returnJSON:(id)arg0 error:(*id)arg1 ;
-(id)returnNull;
-(id)returnString:(id)arg0 ;
-(id)returnUInt64:(NSUInteger)arg0 ;
-(id)stringValueAtArgumentIndex:(NSInteger)arg0 ;
-(struct sqlite3_value *)_valueAtIndex:(NSInteger)arg0 ;
-(void)memoizeObject:(id)arg0 forArgumentIndex:(NSInteger)arg1 ;


@end


#endif