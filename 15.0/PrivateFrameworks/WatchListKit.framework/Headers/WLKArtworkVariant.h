// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WLKARTWORKVARIANT_H
#define WLKARTWORKVARIANT_H

@class NSString, NSURL;

#import <Foundation/Foundation.h>


@interface WLKArtworkVariant : NSObject {
    NSString *_artworkURLTemplate;
}


@property (nonatomic, getter=hasAlpha) BOOL alpha; // ivar: _alpha
@property (readonly, nonatomic) CGSize artworkSize; // ivar: _artworkSize
@property (readonly, nonatomic) NSInteger artworkType; // ivar: _artworkType
@property (readonly, copy, nonatomic) NSURL *artworkURL;
@property (readonly, copy, nonatomic) NSString *artworkURLString; // ivar: _artworkURLString
@property (readonly, copy, nonatomic) NSString *format; // ivar: _format
@property (nonatomic) BOOL supportsLayeredImage; // ivar: _supportsLayeredImage


+(id)artworkURLFromTemplate:(id)arg0 forSize:(struct CGSize )arg1 cropCode:(id)arg2 format:(id)arg3 ;
+(id)artworkURLFromTemplate:(id)arg0 forSize:(struct CGSize )arg1 format:(id)arg2 ;
-(id)_sizeDescription:(struct CGSize )arg0 ;
-(id)artworkURLForSize:(struct CGSize )arg0 ;
-(id)artworkURLForSize:(struct CGSize )arg0 cropCode:(id)arg1 format:(id)arg2 ;
-(id)artworkURLForSize:(struct CGSize )arg0 format:(id)arg1 ;
-(id)description;
-(id)initWithDictionary:(id)arg0 ;


@end


#endif