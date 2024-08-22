// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _EFSQLDOUBLEBINDING_H
#define _EFSQLDOUBLEBINDING_H



#import "EFSQLBinding.h"

@interface _EFSQLDoubleBinding : EFSQLBinding

@property (readonly, nonatomic) CGFloat doubleValue; // ivar: _doubleValue


-(id)initWithDouble:(CGFloat)arg0 ;
-(void)bindTo:(struct sqlite3_stmt *)arg0 withSQLIndex:(int)arg1 ;


@end


#endif