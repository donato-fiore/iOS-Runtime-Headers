// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKVSQLCOMMANDCLAUSE_H
#define CKVSQLCOMMANDCLAUSE_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>


@interface CKVSQLCommandClause : NSObject

@property (readonly, nonatomic) NSString *clause; // ivar: _clause
@property (readonly, nonatomic) NSArray *parameters; // ivar: _parameters


-(id)description;
-(id)init;
-(id)initWithClause:(id)arg0 parameters:(id)arg1 ;


@end


#endif