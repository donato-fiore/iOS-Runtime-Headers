// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BMSTREAMVIRTUALTABLE_H
#define BMSTREAMVIRTUALTABLE_H


#import <Foundation/Foundation.h>

#import "BMSQLSchema.h"

@interface BMStreamVirtualTable : NSObject

@property (readonly, copy, nonatomic) id *publisherBlock; // ivar: _publisherBlock
@property (readonly, nonatomic) BMSQLSchema *schema; // ivar: _schema


+(id)new;
-(id)description;
-(id)init;
-(id)initWithSchema:(id)arg0 publisherBlock:(id)arg1 ;
-(id)initWithStream:(id)arg0 ;
-(id)publisher;


@end


#endif