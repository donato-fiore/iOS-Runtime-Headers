// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _EFSQLSTRINGBINDING_H
#define _EFSQLSTRINGBINDING_H

@class NSString;


#import "EFSQLBinding.h"

@interface _EFSQLStringBinding : EFSQLBinding

@property (readonly, copy, nonatomic) NSString *stringValue; // ivar: _stringValue


-(id)initWithString:(id)arg0 ;
-(void)bindTo:(struct sqlite3_stmt *)arg0 withSQLIndex:(int)arg1 ;


@end


#endif