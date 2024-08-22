// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSTCELLDICTIONARY_H
#define TSTCELLDICTIONARY_H

@class TSUIntegerKeyDictionary;

#import <Foundation/Foundation.h>


@interface TSTCellDictionary : NSObject {
    TSUIntegerKeyDictionary *mDict;
    _opaque_pthread_rwlock_t mDictRWLock;
}




-(id)allCells;
-(id)cellAtCellID:(struct ? )arg0 ;
-(id)init;
-(void)applyBlockToAllCells:(id)arg0 ;
-(void)dealloc;
-(void)removeAllCells;
-(void)setCell:(id)arg0 atCellID:(struct ? )arg1 ;


@end


#endif