// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MNTRACEPREPAREDSTATEMENT_H
#define MNTRACEPREPAREDSTATEMENT_H


#import <Foundation/Foundation.h>


@interface MNTracePreparedStatement : NSObject {
    *sqlite3 _db;
    *sqlite3_stmt _preparedStatement;
}




+(id)preparedStatementForTrace:(id)arg0 statement:(id)arg1 outError:(*id)arg2 ;
-(BOOL)_prepareStatementForTrace:(id)arg0 statement:(id)arg1 outError:(*id)arg2 ;
-(BOOL)clearBindings;
-(BOOL)execute;
-(BOOL)reset;
-(BOOL)step;
-(BOOL)stepRow;
-(CGFloat)columnDouble:(NSUInteger)arg0 ;
-(id)columnData:(NSUInteger)arg0 ;
-(id)columnObjects:(NSUInteger)arg0 ofClasses:(id)arg1 ;
-(id)columnObjectsOld:(NSUInteger)arg0 ofClasses:(id)arg1 ;
-(id)columnString:(NSUInteger)arg0 ;
-(id)debugDescription;
-(id)init;
-(id)initForTrace:(id)arg0 statement:(id)arg1 outError:(*id)arg2 ;
-(int)columnInt:(NSUInteger)arg0 ;
-(void)bind:(NSUInteger)arg0 data:(id)arg1 ;
-(void)bind:(NSUInteger)arg0 double:(CGFloat)arg1 ;
-(void)bind:(NSUInteger)arg0 int:(int)arg1 ;
-(void)bind:(NSUInteger)arg0 string:(id)arg1 ;
-(void)bindNull:(NSUInteger)arg0 ;
-(void)dealloc;
-(void)finalize;


@end


#endif