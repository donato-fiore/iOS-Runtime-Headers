// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AMSSQLITESTATEMENT_H
#define AMSSQLITESTATEMENT_H

@class NSString, NSDictionary;
@protocol AMSSQLiteBinding;

#import <Foundation/Foundation.h>

#import "AMSSQLiteStatement.h"
#import "AMSSQLiteConnection.h"

@interface AMSSQLiteStatement : NSObject <AMSSQLiteBinding>

 {
    AMSSQLiteStatement *_strongSelf;
}


@property (readonly, copy, nonatomic) NSString *SQL;
@property (readonly, copy, nonatomic) NSDictionary *columnIndexByName;
@property (readonly, nonatomic) AMSSQLiteConnection *connection; // ivar: _connection
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isReadOnly) BOOL readOnly;
@property (readonly, nonatomic) *sqlite3_stmt sqlite3_stmt; // ivar: _statement
@property (readonly) Class superclass;


-(id)initWithStatement:(struct sqlite3_stmt *)arg0 onConnection:(id)arg1 ;
-(int)clearBindings;
-(int)finalizeStatement;
-(int)reset;
-(int)step;
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


@end


#endif