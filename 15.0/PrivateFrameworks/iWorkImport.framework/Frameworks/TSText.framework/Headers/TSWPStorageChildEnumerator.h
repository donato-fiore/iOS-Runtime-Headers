// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSWPSTORAGECHILDENUMERATOR_H
#define TSWPSTORAGECHILDENUMERATOR_H

@class NSEnumerator, NSArray;


#import "TSWPStorage.h"

@interface TSWPStorageChildEnumerator : NSEnumerator

@property (retain, nonatomic) NSArray *charOffsetArray; // ivar: _charOffsetArray
@property (nonatomic) unsigned int index; // ivar: _index
@property (retain, nonatomic) TSWPStorage *storage; // ivar: _storage


-(id)initWithStorage:(id)arg0 ;
-(id)nextObject;


@end


#endif