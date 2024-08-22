// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _LSLINKEDCHILDAPPLICATIONRECORDENUMERATOR_H
#define _LSLINKEDCHILDAPPLICATIONRECORDENUMERATOR_H

@class LSRecordEnumerator, NSString;



@interface _LSLinkedChildApplicationRecordEnumerator : LSRecordEnumerator {
    vector<unsigned int, std::allocator<unsigned int>> _units;
    NSString *_parentBundleID;
    NSUInteger _options;
}




-(BOOL)_getObject:(*id)arg0 atIndex:(NSUInteger)arg1 context:(struct LSContext *)arg2 ;
-(BOOL)_prepareWithContext:(struct LSContext *)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithContext:(struct LSContext *)arg0 parentBundleID:(id)arg1 options:(NSUInteger)arg2 ;


@end


#endif