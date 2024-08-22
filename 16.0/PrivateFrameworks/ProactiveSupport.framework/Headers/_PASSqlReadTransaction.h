// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _PASSQLREADTRANSACTION_H
#define _PASSQLREADTRANSACTION_H


#import <Foundation/Foundation.h>

#import "_PASSqliteDatabase.h"

@interface _PASSqlReadTransaction : NSObject

@property (readonly, nonatomic) _PASSqliteDatabase *db; // ivar: _db


-(id)init;
-(id)initWithHandle:(id)arg0 ;


@end


#endif