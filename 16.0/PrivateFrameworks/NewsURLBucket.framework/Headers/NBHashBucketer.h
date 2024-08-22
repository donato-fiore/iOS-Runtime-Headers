// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NBHASHBUCKETER_H
#define NBHASHBUCKETER_H


#import <Foundation/Foundation.h>

#import "NBObjCHashBucketer.h"

@interface NBHashBucketer : NSObject

@property (readonly, nonatomic) NBObjCHashBucketer *bucketer; // ivar: _bucketer


-(NSUInteger)bucketForHash:(id)arg0 bucketCount:(NSUInteger)arg1 ;
-(id)init;


@end


#endif