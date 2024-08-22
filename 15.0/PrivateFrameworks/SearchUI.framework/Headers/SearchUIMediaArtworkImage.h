// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SEARCHUIMEDIAARTWORKIMAGE_H
#define SEARCHUIMEDIAARTWORKIMAGE_H

@class NSString;


#import "SearchUIImage.h"

@interface SearchUIMediaArtworkImage : SearchUIImage

@property NSInteger mediaEntityType; // ivar: _mediaEntityType
@property (retain) NSString *persistentID; // ivar: _persistentID
@property (retain) NSString *spotlightIdentifier; // ivar: _spotlightIdentifier
@property (retain) NSString *universalLibraryID; // ivar: _universalLibraryID


-(BOOL)isEqual:(id)arg0 ;
-(Class)classForCoder;
-(NSUInteger)hash;
-(id)initWithSFImage:(id)arg0 ;
-(id)initWithSpotlightIdentifier:(id)arg0 ;
-(void)loadImageWithScale:(CGFloat)arg0 isDarkStyle:(BOOL)arg1 completionHandler:(id)arg2 ;


@end


#endif