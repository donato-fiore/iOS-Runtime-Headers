// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PPREADTRANSACTION_H
#define PPREADTRANSACTION_H

@class _PASSqliteDatabase;

#import <Foundation/Foundation.h>


@interface PPReadTransaction : NSObject

@property (readonly) _PASSqliteDatabase *db; // ivar: _db


-(id)initWithHandle:(id)arg0 ;


@end


#endif