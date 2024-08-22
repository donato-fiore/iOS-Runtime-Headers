// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _EFSQLINT64BINDING_H
#define _EFSQLINT64BINDING_H



#import "EFSQLBinding.h"

@interface _EFSQLInt64Binding : EFSQLBinding

@property (readonly, nonatomic) NSInteger integerValue; // ivar: _integerValue


-(id)initWithInt64:(NSInteger)arg0 ;
-(void)bindTo:(struct sqlite3_stmt *)arg0 withSQLIndex:(int)arg1 ;


@end


#endif