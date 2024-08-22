// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EFSQLPREPAREDSTATEMENT_H
#define EFSQLPREPAREDSTATEMENT_H

@class NSString;

#import <Foundation/Foundation.h>


@interface EFSQLPreparedStatement : NSObject {
    *sqlite3_stmt _compiled;
}


@property (nonatomic) CGFloat allowedExecutionTime; // ivar: _allowedExecutionTime
@property (readonly, nonatomic) *sqlite3_stmt compiled;
@property (readonly, nonatomic) BOOL isFinalized;
@property (readonly, copy, nonatomic) NSString *originalString;


+(id)log;
-(BOOL)clearBindingsWithError:(*id)arg0 ;
// -(BOOL)executeUsingBlock:(id)arg0 error:(unk)arg1  ;
// -(BOOL)executeWithIndexedBindings:(id)arg0 usingBlock:(id)arg1 error:(unk)arg2  ;
-(BOOL)executeWithNamedBindings:(id)arg0 rowsChanged:(*NSUInteger)arg1 error:(*id)arg2 ;
// -(BOOL)executeWithNamedBindings:(id)arg0 usingBlock:(id)arg1 error:(unk)arg2  ;
-(BOOL)finalizeWithError:(*id)arg0 ;
-(BOOL)resetWithError:(*id)arg0 ;
-(id)debugDescription;
-(id)initWithString:(id)arg0 connection:(id)arg1 ;
-(void)dealloc;


@end


#endif