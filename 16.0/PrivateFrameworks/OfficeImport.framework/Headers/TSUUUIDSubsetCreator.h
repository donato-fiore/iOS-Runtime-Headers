// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSUUUIDSUBSETCREATOR_H
#define TSUUUIDSUBSETCREATOR_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "TSUUUIDSetStore.h"

@interface TSUUUIDSubsetCreator : NSObject {
    NSMutableDictionary *_createdSubsetsByRange;
}


@property (readonly) *void baseUuidVector; // ivar: _baseUuidVector
@property (readonly) TSUUUIDSetStore *uuidSetStore; // ivar: _uuidSetStore


-(id)initWithUuidSetStore:(id)arg0 baseUuidVector:(*void)arg1 ;
-(unsigned int)uuidSetStoreIndexForIndexesInRange:(struct _NSRange )arg0 ;


@end


#endif