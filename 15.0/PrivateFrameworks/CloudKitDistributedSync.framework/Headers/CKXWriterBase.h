// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKXWRITERBASE_H
#define CKXWRITERBASE_H

@class NSMutableArray;

#import <Foundation/Foundation.h>

#import "CKXSchema.h"

@interface CKXWriterBase : NSObject

@property (readonly, nonatomic) NSMutableArray *datas; // ivar: _datas
@property (readonly, nonatomic) CKXSchema *schema; // ivar: _schema


-(NSInteger)newPage;
-(NSInteger)pageCount;
-(id)initWithSchema:(id)arg0 ;
-(id)pageAtIndex:(NSInteger)arg0 ;


@end


#endif