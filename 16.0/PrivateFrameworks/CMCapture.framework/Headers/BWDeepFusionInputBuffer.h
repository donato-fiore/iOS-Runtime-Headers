// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BWDEEPFUSIONINPUTBUFFER_H
#define BWDEEPFUSIONINPUTBUFFER_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface BWDeepFusionInputBuffer : NSObject

@property (readonly, nonatomic) *__CVBuffer buffer; // ivar: _buffer
@property (readonly, nonatomic) NSDictionary *metadata; // ivar: _metadata
@property (readonly, nonatomic) NSUInteger type; // ivar: _type


-(id)initWithBuffer:(struct __CVBuffer *)arg0 type:(NSUInteger)arg1 metadata:(id)arg2 ;
-(void)dealloc;


@end


#endif