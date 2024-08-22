// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BMSQLCOLUMNACCESSSET_H
#define BMSQLCOLUMNACCESSSET_H

@class NSSet, NSString;

#import <Foundation/Foundation.h>


@interface BMSQLColumnAccessSet : NSObject

@property (readonly, nonatomic) NSSet *columns; // ivar: _columns
@property (readonly, copy, nonatomic) NSString *table; // ivar: _table


+(id)new;
-(BOOL)checkTable:(id)arg0 column:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)init;
-(id)initWithTable:(id)arg0 columns:(id)arg1 ;


@end


#endif