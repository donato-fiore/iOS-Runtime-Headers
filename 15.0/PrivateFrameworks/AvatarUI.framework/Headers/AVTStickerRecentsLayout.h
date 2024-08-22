// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVTSTICKERRECENTSLAYOUT_H
#define AVTSTICKERRECENTSLAYOUT_H


#import <Foundation/Foundation.h>


@interface AVTStickerRecentsLayout : NSObject

@property (readonly, nonatomic) NSInteger appButtonIndex; // ivar: _appButtonIndex
@property (readonly, nonatomic) NSInteger interitemPadding; // ivar: _interitemPadding
@property (readonly, nonatomic) BOOL laysOutVertically; // ivar: _laysOutVertically
@property (readonly, nonatomic) NSInteger numberOfItems; // ivar: _numberOfItems
@property (readonly, nonatomic) NSInteger numberOfItemsPerColumn; // ivar: _numberOfItemsPerColumn
@property (readonly, nonatomic) NSInteger numberOfItemsPerRow; // ivar: _numberOfItemsPerRow


+(struct CGSize )buttonSizeForContainerSize:(struct CGSize )arg0 imageSize:(struct CGSize )arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithNumberOfItemsPerRow:(NSInteger)arg0 numberOfItemsPerColumn:(NSInteger)arg1 interitemPadding:(CGFloat)arg2 appButtonIndex:(NSInteger)arg3 laysOutVertically:(BOOL)arg4 ;


@end


#endif