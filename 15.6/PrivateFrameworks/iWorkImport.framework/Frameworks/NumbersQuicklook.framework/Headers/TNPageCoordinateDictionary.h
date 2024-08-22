// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TNPAGECOORDINATEDICTIONARY_H
#define TNPAGECOORDINATEDICTIONARY_H


#import <Foundation/Foundation.h>


@interface TNPageCoordinateDictionary : NSObject {
    map<TSUCellCoord, SFUtility::ObjcSharedPtr<NSObject>, std::less<TSUCellCoord>, std::allocator<std::pair<const TSUCellCoord, SFUtility::ObjcSharedPtr<NSObject>>>> _pageCoordinateDictionary;
    _opaque_pthread_rwlock_t _rwlock;
}




-(id)allObjects;
-(id)init;
-(id)objectForPageCoordinate:(struct TSUCellCoord )arg0 ;
-(void)dealloc;
-(void)removeAllObjects;
-(void)setObject:(id)arg0 forPageCoordinate:(struct TSUCellCoord )arg1 ;


@end


#endif