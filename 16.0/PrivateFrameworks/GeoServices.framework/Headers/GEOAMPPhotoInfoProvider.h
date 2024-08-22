// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOAMPPHOTOINFOPROVIDER_H
#define GEOAMPPHOTOINFOPROVIDER_H

@class AMSMediaArtwork, NSString;
@protocol GEOPhotoInfoProvider;

#import <Foundation/Foundation.h>

#import "GEOPDPhotoContent.h"

@interface GEOAMPPhotoInfoProvider : NSObject <GEOPhotoInfoProvider>

 {
    AMSMediaArtwork *_artwork;
    GEOPDPhotoContent *_templatePhotoContent;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(CGFloat)sizeRatio;
-(id)bestPhotoForSize:(struct CGSize )arg0 options:(id)arg1 ;
-(id)initWithPhotoContent:(id)arg0 ;
-(id)largestPhoto;
-(int)designatedURLType;


@end


#endif