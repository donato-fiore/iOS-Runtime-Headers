// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTLINDEXEDCONSTANTVALUE_H
#define MTLINDEXEDCONSTANTVALUE_H


#import <Foundation/Foundation.h>


@interface MTLIndexedConstantValue : NSObject

@property (readonly) *void data; // ivar: _data
@property (readonly) NSUInteger dataType; // ivar: _dataType
@property (readonly) NSUInteger index; // ivar: _index


-(id)describe;
-(id)description;
-(id)formattedDescription:(NSUInteger)arg0 ;
-(id)initWithValue:(*void)arg0 type:(NSUInteger)arg1 index:(NSUInteger)arg2 ;
-(void)dealloc;


@end


#endif