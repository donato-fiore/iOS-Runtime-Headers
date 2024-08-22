// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDINITIALSTREAMDATACHUNK_H
#define HMDINITIALSTREAMDATACHUNK_H

@class NSString;


#import "HMDStreamDataChunk.h"

@interface HMDInitialStreamDataChunk : HMDStreamDataChunk

@property (readonly, copy) NSString *type; // ivar: _type


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)attributeDescriptions;
-(id)initWithData:(id)arg0 isLast:(BOOL)arg1 type:(id)arg2 ;
-(id)initWithStreamDataDictionary:(id)arg0 ;


@end


#endif