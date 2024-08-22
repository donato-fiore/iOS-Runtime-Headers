// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CRKFILTEREDENUMERATOR_H
#define CRKFILTEREDENUMERATOR_H

@class NSEnumerator;



@interface CRKFilteredEnumerator : NSEnumerator

@property (readonly, nonatomic) NSEnumerator *enumerator; // ivar: _enumerator
@property (readonly, nonatomic) id *filterBlock; // ivar: _filterBlock


-(BOOL)shouldRejectItem:(id)arg0 ;
-(id)initWithEnumerator:(id)arg0 filterBlock:(id)arg1 ;
-(id)nextObject;


@end


#endif