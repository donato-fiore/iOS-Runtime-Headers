// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _REDIFFITEM_H
#define _REDIFFITEM_H


#import <Foundation/Foundation.h>


@interface _REDiffItem : NSObject

@property (readonly, nonatomic) id *comparator; // ivar: _comparator
@property (readonly, nonatomic) id *hashGenerator; // ivar: _hashGenerator
@property (readonly, nonatomic) NSUInteger index; // ivar: _index
@property (readonly, nonatomic) id *object; // ivar: _object


// +(id)itemWithObject:(id)arg0 index:(NSUInteger)arg1 comparator:(id)arg2 hashGenerator:(unk)arg3  ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;


@end


#endif