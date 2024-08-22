// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _EFSQLDATABINDING_H
#define _EFSQLDATABINDING_H

@class NSData;


#import "EFSQLBinding.h"

@interface _EFSQLDataBinding : EFSQLBinding

@property (readonly, copy, nonatomic) NSData *dataValue; // ivar: _dataValue


-(id)initWithData:(id)arg0 ;
-(void)bindTo:(struct sqlite3_stmt *)arg0 withSQLIndex:(int)arg1 ;


@end


#endif