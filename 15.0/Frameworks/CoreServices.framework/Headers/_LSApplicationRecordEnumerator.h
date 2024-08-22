// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _LSAPPLICATIONRECORDENUMERATOR_H
#define _LSAPPLICATIONRECORDENUMERATOR_H

@class LSRecordEnumerator, NSURL;



@interface _LSApplicationRecordEnumerator : LSRecordEnumerator {
    NSURL *_volumeURL;
    NSUInteger _options;
    vector<unsigned int, std::allocator<unsigned int>> _bundleIdentifiersOrUnits;
    unsigned int _container;
}


@property unsigned int bundleClass; // ivar: _bundleClass


-(BOOL)_getContainer:(*unsigned int)arg0 context:(struct LSContext *)arg1 error:(*id)arg2 ;
-(BOOL)_getObject:(*id)arg0 atIndex:(NSUInteger)arg1 context:(struct LSContext *)arg2 ;
-(BOOL)_prepareWithContext:(struct LSContext *)arg0 error:(*id)arg1 ;
-(id)_applicationRecordWithContext:(struct LSContext *)arg0 bundleIdentifierOrUnit:(unsigned int)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithContext:(struct LSContext *)arg0 volumeURL:(id)arg1 options:(NSUInteger)arg2 ;


@end


#endif