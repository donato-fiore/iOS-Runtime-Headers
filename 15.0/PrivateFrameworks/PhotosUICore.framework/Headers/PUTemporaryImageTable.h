// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUTEMPORARYIMAGETABLE_H
#define PUTEMPORARYIMAGETABLE_H

@class PLTemporaryImageTable;



@interface PUTemporaryImageTable : PLTemporaryImageTable {
    uint8_t _indexCounter;
}




-(int)nextCacheIndex;


@end


#endif