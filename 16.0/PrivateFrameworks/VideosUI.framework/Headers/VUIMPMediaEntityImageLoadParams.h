// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VUIMPMEDIAENTITYIMAGELOADPARAMS_H
#define VUIMPMEDIAENTITYIMAGELOADPARAMS_H

@class MPArtworkCatalog, NSString, MPMediaItem;
@protocol VUIImageLoadParams;

#import <Foundation/Foundation.h>


@interface VUIMPMediaEntityImageLoadParams : NSObject <VUIImageLoadParams>



@property (retain, nonatomic) MPArtworkCatalog *artworkCatalog; // ivar: _artworkCatalog
@property (nonatomic) BOOL calculatedIdentifier; // ivar: _calculatedIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *imageIdentifier; // ivar: _imageIdentifier
@property (readonly, nonatomic) NSUInteger imageType; // ivar: _imageType
@property (retain, nonatomic) MPMediaItem *mediaItem; // ivar: _mediaItem
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(id)init;
-(id)initWithMediaItem:(id)arg0 andImageType:(NSUInteger)arg1 ;


@end


#endif