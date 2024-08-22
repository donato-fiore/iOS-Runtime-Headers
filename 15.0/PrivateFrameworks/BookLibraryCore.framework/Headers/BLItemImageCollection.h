// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BLITEMIMAGECOLLECTION_H
#define BLITEMIMAGECOLLECTION_H

@class NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface BLItemImageCollection : NSObject <NSCopying>



@property (readonly, nonatomic) NSArray *itemImages; // ivar: _itemImages


-(id)_imagesForSize:(struct CGSize )arg0 scale:(CGFloat)arg1 ;
-(id)_newImagesForDictionary:(id)arg0 ;
-(id)bestImageForSize:(struct CGSize )arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)imagesForKind:(id)arg0 ;
-(id)imagesForSize:(struct CGSize )arg0 ;
-(id)initWithImageCollection:(id)arg0 ;
-(id)initWithItemImages:(id)arg0 ;


@end


#endif