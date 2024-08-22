// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKXREADERBASE_H
#define CKXREADERBASE_H


#import <Foundation/Foundation.h>

#import "CKXSchema.h"

@interface CKXReaderBase : NSObject

@property (readonly, nonatomic) CKXSchema *schema; // ivar: _schema


-(id)initWithSchema:(id)arg0 ;


@end


#endif