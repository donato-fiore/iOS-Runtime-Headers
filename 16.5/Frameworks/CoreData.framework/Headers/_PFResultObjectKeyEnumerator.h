// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _PFRESULTOBJECTKEYENUMERATOR_H
#define _PFRESULTOBJECTKEYENUMERATOR_H

@class NSEnumerator;



@interface _PFResultObjectKeyEnumerator : NSEnumerator {
    id *_target;
    *id _keys;
    *NSUInteger _referenceItems;
    _NSRange _range;
    NSUInteger _index;
}




-(id)initWithArray:(*id)arg0 forTarget:(id)arg1 withReferenceValues:(*NSUInteger)arg2 andRange:(struct _NSRange )arg3 ;
-(id)nextObject;
-(void)dealloc;


@end


#endif