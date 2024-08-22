// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _LSEXTENSIONPOINTRECORDENUMERATOR_H
#define _LSEXTENSIONPOINTRECORDENUMERATOR_H

@class LSRecordEnumerator;



@interface _LSExtensionPointRecordEnumerator : LSRecordEnumerator {
    vector<unsigned int, std::allocator<unsigned int>> _extensionIDs;
}




-(BOOL)_getObject:(*id)arg0 atIndex:(NSUInteger)arg1 context:(struct LSContext *)arg2 ;
-(BOOL)_prepareWithContext:(struct LSContext *)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif