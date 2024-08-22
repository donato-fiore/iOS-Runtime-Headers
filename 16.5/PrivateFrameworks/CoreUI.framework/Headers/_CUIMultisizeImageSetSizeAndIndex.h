// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _CUIMULTISIZEIMAGESETSIZEANDINDEX_H
#define _CUIMULTISIZEIMAGESETSIZEANDINDEX_H


#import <Foundation/Foundation.h>


@interface _CUIMultisizeImageSetSizeAndIndex : NSObject

@property (nonatomic) NSInteger idiom; // ivar: _idiom
@property (nonatomic) unsigned int index; // ivar: _index
@property (nonatomic) CGSize size; // ivar: _size
@property (nonatomic) NSUInteger subtype; // ivar: _subtype


-(id)description;
-(id)initWithSize:(struct CGSize )arg0 index:(unsigned int)arg1 idiom:(NSInteger)arg2 subtype:(NSUInteger)arg3 ;


@end


#endif