// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MRUMEDIASUGGESTION_H
#define MRUMEDIASUGGESTION_H

@class MPArtworkCatalog, UIImage, NSString, MRMediaSuggestion;

#import <Foundation/Foundation.h>


@interface MRUMediaSuggestion : NSObject

@property (readonly, nonatomic) MPArtworkCatalog *artworkCatalog; // ivar: _artworkCatalog
@property (retain, nonatomic) UIImage *artworkImage; // ivar: _artworkImage
@property (retain, nonatomic) UIImage *iconImage; // ivar: _iconImage
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) MRMediaSuggestion *mediaSuggestion; // ivar: _mediaSuggestion
@property (readonly, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (readonly, nonatomic) NSString *title; // ivar: _title
@property (readonly, nonatomic) NSInteger type; // ivar: _type


-(id)initWithMediaSuggestion:(id)arg0 ;
-(id)initWithNowPlaying:(id)arg0 title:(id)arg1 subtitle:(id)arg2 artworkCatalog:(id)arg3 iconImage:(id)arg4 ;


@end


#endif