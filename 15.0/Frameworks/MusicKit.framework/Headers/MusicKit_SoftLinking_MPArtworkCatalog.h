// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MUSICKIT_SOFTLINKING_MPARTWORKCATALOG_H
#define MUSICKIT_SOFTLINKING_MPARTWORKCATALOG_H

@class MPArtworkCatalog;

#import <Foundation/Foundation.h>


@interface MusicKit_SoftLinking_MPArtworkCatalog : NSObject {
    MPArtworkCatalog *_underlyingArtworkCatalog;
}


@property (nonatomic) CGSize fittingSize;


+(id)artworkCatalogWithDataSourceShortDescription:(id)arg0 dataSourceIdentifier:(id)arg1 tokenParameters:(id)arg2 ;
-(id)_initWithUnderlyingArtworkCatalog:(id)arg0 ;
-(void)requestImageDataWithCompletion:(id)arg0 ;


@end


#endif