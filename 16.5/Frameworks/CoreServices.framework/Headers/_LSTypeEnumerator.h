// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _LSTYPEENUMERATOR_H
#define _LSTYPEENUMERATOR_H

@class LSDBEnumerator;



@interface _LSTypeEnumerator : LSDBEnumerator {
    vector<unsigned int, std::allocator<unsigned int>> _typeIDs;
}




-(BOOL)_getObject:(*id)arg0 atIndex:(NSUInteger)arg1 context:(struct LSContext *)arg2 ;
-(BOOL)_prepareWithContext:(struct LSContext *)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif