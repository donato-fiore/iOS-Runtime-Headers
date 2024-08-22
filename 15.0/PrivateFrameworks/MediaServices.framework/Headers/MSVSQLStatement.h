// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MSVSQLSTATEMENT_H
#define MSVSQLSTATEMENT_H


#import <Foundation/Foundation.h>


@interface MSVSQLStatement : NSObject {
    *sqlite3_stmt _statementHandle;
}




-(BOOL)bindJSONValue:(id)arg0 toParameterAtIndex:(NSInteger)arg1 error:(*id)arg2 ;
-(BOOL)bindJSONValue:(id)arg0 toParameterNamed:(id)arg1 error:(*id)arg2 ;
-(id)description;
-(void)bindBoolValue:(BOOL)arg0 toParameterAtIndex:(NSInteger)arg1 ;
-(void)bindBoolValue:(BOOL)arg0 toParameterNamed:(id)arg1 ;
-(void)bindDataValue:(id)arg0 toParameterAtIndex:(NSInteger)arg1 ;
-(void)bindDataValue:(id)arg0 toParameterNamed:(id)arg1 ;
-(void)bindDateValue:(id)arg0 toParameterAtIndex:(NSInteger)arg1 ;
-(void)bindDateValue:(id)arg0 toParameterNamed:(id)arg1 ;
-(void)bindDoubleValue:(CGFloat)arg0 toParameterAtIndex:(NSInteger)arg1 ;
-(void)bindDoubleValue:(CGFloat)arg0 toParameterNamed:(id)arg1 ;
-(void)bindFloatValue:(float)arg0 toParameterAtIndex:(NSInteger)arg1 ;
-(void)bindFloatValue:(float)arg0 toParameterNamed:(id)arg1 ;
-(void)bindInt64Value:(NSInteger)arg0 toParameterAtIndex:(NSInteger)arg1 ;
-(void)bindInt64Value:(NSInteger)arg0 toParameterNamed:(id)arg1 ;
-(void)bindNullValueToParameterAtIndex:(NSInteger)arg0 ;
-(void)bindNullValueToParameterNamed:(id)arg0 ;
-(void)bindStringValue:(id)arg0 toParameterAtIndex:(NSInteger)arg1 ;
-(void)bindStringValue:(id)arg0 toParameterNamed:(id)arg1 ;
-(void)bindUInt64Value:(NSUInteger)arg0 toParameterAtIndex:(NSInteger)arg1 ;
-(void)bindUInt64Value:(NSUInteger)arg0 toParameterNamed:(id)arg1 ;
-(void)dealloc;
-(void)invalidate;
-(void)reset;


@end


#endif