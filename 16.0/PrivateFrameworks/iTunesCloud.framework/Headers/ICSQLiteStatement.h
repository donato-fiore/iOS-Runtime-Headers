// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICSQLITESTATEMENT_H
#define ICSQLITESTATEMENT_H

@class NSString, NSDictionary;
@protocol ICSQLiteBinding;

#import <Foundation/Foundation.h>

#import "ICSQLiteStatement.h"
#import "ICSQLiteConnection.h"

@interface ICSQLiteStatement : NSObject <ICSQLiteBinding>

 {
    ICSQLiteStatement *_strongSelf;
}


@property (readonly, copy, nonatomic) NSString *SQL;
@property (readonly, copy, nonatomic) NSDictionary *columnIndexByName;
@property (readonly, nonatomic) ICSQLiteConnection *connection; // ivar: _connection
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isReadOnly) BOOL readOnly;
@property (readonly, nonatomic) *sqlite3_stmt sqlite3_stmt; // ivar: _statement
@property (readonly) Class superclass;


-(id)initWithStatement:(struct sqlite3_stmt *)arg0 connection:(id)arg1 ;
-(int)clearBindings;
-(int)finalizeStatement;
-(int)reset;
-(int)step;
-(void)bindData:(id)arg0 atPosition:(int)arg1 ;
-(void)bindDataCopy:(id)arg0 atPosition:(int)arg1 ;
-(void)bindDouble:(CGFloat)arg0 atPosition:(int)arg1 ;
-(void)bindFloat:(float)arg0 atPosition:(int)arg1 ;
-(void)bindInt64:(NSInteger)arg0 atPosition:(int)arg1 ;
-(void)bindInt:(int)arg0 atPosition:(int)arg1 ;
-(void)bindNullAtPosition:(int)arg0 ;
-(void)bindNumber:(id)arg0 atPosition:(int)arg1 ;
-(void)bindString:(id)arg0 atPosition:(int)arg1 ;
-(void)bindStringCopy:(id)arg0 atPosition:(int)arg1 ;


@end


#endif