// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TFIMAGEFETCHER_H
#define TFIMAGEFETCHER_H


#import <Foundation/Foundation.h>


@interface TFImageFetcher : NSObject

@property (readonly, nonatomic) CGFloat displayedScreenScale; // ivar: _displayedScreenScale


-(id)_urlStringForIconArtwork:(id)arg0 ofSize:(struct CGSize )arg1 fileFormat:(id)arg2 ;
-(id)init;
-(void)fetchIconArtwork:(id)arg0 ofSize:(struct CGSize )arg1 intoView:(id)arg2 animated:(BOOL)arg3 ;


@end


#endif