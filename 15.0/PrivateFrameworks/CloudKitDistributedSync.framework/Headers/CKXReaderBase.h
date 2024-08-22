// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKXREADERBASE_H
#define CKXREADERBASE_H

@class NSData;

#import <Foundation/Foundation.h>

#import "CKXSchema.h"

@interface CKXReaderBase : NSObject

@property (retain, nonatomic) NSData *data; // ivar: _data
@property (readonly, nonatomic) CKXSchema *schema; // ivar: _schema


-(id)initWithSchema:(id)arg0 ;


@end


#endif