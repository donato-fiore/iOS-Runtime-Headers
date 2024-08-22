// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLTEMPORARYIMAGETABLE_H
#define PLTEMPORARYIMAGETABLE_H

@class NSMutableArray, NSString;
@protocol PLThumbPersistenceManager;

#import <Foundation/Foundation.h>


@interface PLTemporaryImageTable : NSObject {
    id<PLThumbPersistenceManager> *_imageTable;
    NSUInteger _nextTableEntryIndex;
    NSMutableArray *_itemIndexToThumbEntryMapping;
    NSString *_imageTablePath;
    unsigned short _imageFormatID;
}




-(BOOL)_writeBGRAThumbnailDataForImage:(id)arg0 intoTable:(id)arg1 atIndex:(NSUInteger)arg2 ;
-(BOOL)_writeCompressedThumbnailDataForImage:(id)arg0 intoTable:(id)arg1 atIndex:(NSUInteger)arg2 ;
-(NSUInteger)_imageTableIndexForItemIndex:(NSUInteger)arg0 ;
-(id)imageForItemAtIndex:(NSUInteger)arg0 ;
-(id)initWithWithPath:(id)arg0 imageFormat:(unsigned short)arg1 ;
-(void)_cleanup;
-(void)_positional_setThumbnailsWithIdentifier:(id)arg0 thumbnailIndex:(NSUInteger)arg1 image:(id)arg2 assetUUID:(id)arg3 ;
-(void)dealloc;
-(void)insertItemAtIndex:(NSUInteger)arg0 ;
-(void)removeItemAtIndex:(NSUInteger)arg0 ;
-(void)reset;
-(void)setImage:(id)arg0 forItemAtIndex:(NSUInteger)arg1 ;


@end


#endif