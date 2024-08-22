// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NAFILTERENUMERATOR_H
#define NAFILTERENUMERATOR_H

@class NSEnumerator;



@interface NAFilterEnumerator : NSEnumerator

@property (readonly, nonatomic) NSEnumerator *enumerator; // ivar: _enumerator
@property (readonly, copy, nonatomic) id *filter; // ivar: _filter


-(id)allObjects;
-(id)initWithEnumerator:(id)arg0 filter:(id)arg1 ;
-(id)nextObject;


@end


#endif