// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _NASETCONTAINER_H
#define _NASETCONTAINER_H


#import <Foundation/Foundation.h>


@interface _NASetContainer : NSObject

@property (copy, nonatomic) id *comparator; // ivar: _comparator
@property (copy, nonatomic) id *hashGenerator; // ivar: _hashGenerator
@property (nonatomic) NSUInteger index; // ivar: _index
@property (retain, nonatomic) id *object; // ivar: _object


// +(id)containerWithObject:(id)arg0 atIndex:(NSUInteger)arg1 comparator:(id)arg2 hashGenerator:(unk)arg3  ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;


@end


#endif