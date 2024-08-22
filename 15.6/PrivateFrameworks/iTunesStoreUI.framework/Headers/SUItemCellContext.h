// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SUITEMCELLCONTEXT_H
#define SUITEMCELLCONTEXT_H



#import "SUArtworkCellContext.h"

@interface SUItemCellContext : SUArtworkCellContext {
    *__CFDictionary _cachedRatingImages;
    *__CFDictionary _stringSizes;
}


@property (nonatomic) ? stringSizeCacheKeyCallBacks; // ivar: _stringSizeCacheKeyCallBacks


-(id)init;
-(id)ratingImageForRating:(float)arg0 style:(NSInteger)arg1 ;
-(struct CGSize )sizeForString:(id)arg0 font:(id)arg1 constrainedToSize:(struct CGSize )arg2 ;
-(void)dealloc;
-(void)resetLayoutCaches;


@end


#endif