// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _NSKNOWNKEYSENUMERATOR_H
#define _NSKNOWNKEYSENUMERATOR_H

@class NSEnumerator;



@interface _NSKnownKeysEnumerator : NSEnumerator {
    id *_target;
    *id _list;
    *id _referenceItems;
    _NSRange _range;
    NSUInteger _index;
    NSUInteger _flags;
}




-(id)nextObject;
-(void)dealloc;


@end


#endif