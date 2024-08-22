// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NAFLATMAPENUMERATOR_H
#define NAFLATMAPENUMERATOR_H

@class NSEnumerator;



@interface NAFlatMapEnumerator : NSEnumerator

@property (readonly, nonatomic) NSEnumerator *enumerator; // ivar: _enumerator
@property (readonly, copy, nonatomic) id *map; // ivar: _map


-(id)allObjects;
-(id)initWithEnumerator:(id)arg0 map:(id)arg1 ;
-(id)nextObject;


@end


#endif