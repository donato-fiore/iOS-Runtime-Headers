// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BMTABLE_H
#define BMTABLE_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "BMTableSchema.h"

@interface BMTable : NSObject

@property (copy, nonatomic) NSArray *rows; // ivar: _rows
@property (retain, nonatomic) BMTableSchema *schema; // ivar: _schema


-(id)description;
-(id)init;
-(id)initWithRows:(id)arg0 schema:(id)arg1 ;


@end


#endif