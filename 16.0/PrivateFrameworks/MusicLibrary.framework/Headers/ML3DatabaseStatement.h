// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ML3DATABASESTATEMENT_H
#define ML3DATABASESTATEMENT_H

@class NSString;

#import <Foundation/Foundation.h>


@interface ML3DatabaseStatement : NSObject {
    NSString *_sql;
}


@property (nonatomic) BOOL clearBindingsAfterRunning; // ivar: _clearBindingsAfterRunning
@property (nonatomic) BOOL isExecuting; // ivar: _isExecuting
@property (readonly, nonatomic) NSString *sql;
@property (readonly, nonatomic) *sqlite3_stmt sqliteStatement; // ivar: _sqliteStatement


-(BOOL)isBusy;
-(BOOL)isReadOnly;
-(id)description;
-(id)initWithSQLiteStatement:(struct sqlite3_stmt *)arg0 SQL:(id)arg1 ;
-(int)clearBindings;
-(int)finalizeStatement;
-(int)reset;
-(int)step;
-(void)bindBytes:(*void)arg0 length:(int)arg1 forParameterAtPosition:(int)arg2 ;
-(void)bindBytesNoCopy:(*void)arg0 length:(int)arg1 forParameterAtPosition:(int)arg2 ;
-(void)bindDouble:(CGFloat)arg0 forParameterAtPosition:(int)arg1 ;
-(void)bindInt64:(NSInteger)arg0 forParameterAtPosition:(int)arg1 ;
-(void)bindInt:(int)arg0 forParameterAtPosition:(int)arg1 ;
-(void)bindNullForParameterAtPosition:(int)arg0 ;
-(void)bindUTF8String:(char *)arg0 forParameterAtPosition:(int)arg1 ;
-(void)bindUTF8StringNoCopy:(char *)arg0 forParameterAtPosition:(int)arg1 ;
-(void)bindUTF8StringNoCopy:(char *)arg0 length:(int)arg1 forParameterAtPosition:(int)arg2 ;
-(void)bindValue:(id)arg0 forParameterAtPosition:(int)arg1 ;
-(void)bindValuesForParameterNames:(id)arg0 ;
-(void)bindValuesInArray:(id)arg0 ;
-(void)dealloc;


@end


#endif