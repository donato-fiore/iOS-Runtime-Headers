// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _SYLAZYCHANGEARRAY_H
#define _SYLAZYCHANGEARRAY_H

@class NSArray;
@protocol SYChangeSerializer;



@interface _SYLazyChangeArray : NSArray {
    NSArray *_source;
    NSArray *_types;
    id<SYChangeSerializer> *_decoder;
    BOOL _isSYObjectDataArray;
}


@property (nonatomic) NSInteger compatibilityVersion; // ivar: _compatibilityVersion


-(NSUInteger)count;
-(id)initWithSYObjectDataArray:(id)arg0 typeArray:(id)arg1 decoder:(id)arg2 ;
-(id)initWithSourceArray:(id)arg0 decoder:(id)arg1 ;
-(id)objectAtIndex:(NSUInteger)arg0 ;


@end


#endif